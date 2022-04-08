import path from 'path'
import * as fs from 'fs'
import Finder from './Finder'
import { Config } from './types'
import { checksum } from './helper'

class App extends Finder {
    private async rcs() {
        const gawe = await this.gawerc()

        if (typeof gawe !== 'undefined' && gawe.length > 0) {
            return gawe.map((dir) => {
                const rc = path.resolve(dir, '.gawerc')
                const content = fs.readFileSync(rc, {
                    encoding: 'utf-8'
                })

                let config = JSON.parse(content)
                config = { path: dir, ...config }

                return config as Config
            })
        }

        return []
    }

    public async run() {
        const rsc = await this.rcs()
        console.log(rsc)
    }
}

const app = new App()
app.run()
