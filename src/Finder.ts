import path from 'path'
import * as fs from 'fs'
import { File } from './types'
import { promisify } from 'util'

class Finder {
    private async listing(dir: string) {
        const readdir = promisify(fs.readdir)
        const entries = await readdir(dir, { withFileTypes: true })

        const folders = entries.filter((folder) => {
            const excludes = [
                '.git',
                '.github',
                '.vscode',
                'node_modules'
            ]

            return folder.isDirectory() && !excludes.includes(folder.name)
        })

        const files = entries.filter((file) => !file.isDirectory())
            .map((file): File => {
                return {
                    file: `${dir}/${file.name}`,
                    path: dir
                }
            })

        for (const folder of folders) {
            const recursive = await this.listing(`${dir}/${folder.name}`)

            if (typeof recursive !== 'undefined' && recursive.length > 0) {
                files.push(...recursive)
            }
        }

        return files
    }

    protected async gawerc() {
        const root = path.resolve(__dirname, '..')
        const listing = await this.listing(root)

        return (listing ?? []).filter(({ file }) => {
            return file.includes('.gawerc')
        }).map(({ path }) => {
            return path
        })
    }
}

export default Finder
