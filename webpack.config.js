const path = require("path");
var HtmlWebpackPlugin = require("html-webpack-plugin");
const history = require("connect-history-api-fallback");
const convert = require("koa-connect");

module.exports = {
  mode: "development",
  entry: "./src/main.bs.js",
  output: {
    path: path.join(__dirname, "public"),
    filename: "bundle.js",
    publicPath: "/"
  },
  module: {
    rules: [
      {
        test: /\.(png|jpe?g|gif|svg)(\?.*)?$/,
        loader: "url-loader",
        options: {
          limit: 10000,
          name: "images/[name].[hash:7].[ext]"
        }
      },
      {
        test: /\.scss$/,
        loaders: ["style-loader", "css-loader", "sass-loader"]
      }
    ]
  },
  serve: {
    port: 3000,
    content: [__dirname],
    add: (app, middleware, options) => {
      const historyOptions = {
        // add options here
      };
      app.use(convert(history(historyOptions)));
    }
  },
  plugins: [
    new HtmlWebpackPlugin({
      filename: "index.html",
      template: "./src/template.html",
      inject: true
    })
  ]
};
