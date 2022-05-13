const minify = require('minify-all-js')
const path = require('path')

const app = async () => {
  const directory = path.resolve(__dirname, 'src')
  await minify(directory, {
    json: true,
    module: false,
    mangle: true,
    packageJson: false,
    all: true
  })
}

app()
