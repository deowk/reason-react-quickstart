For the project to build, **these files must exist with exact filenames** (unless you change the bucklescript and webpack configs):

- `template.html` is the page template;
- `src/main.re` is the ReasonML entry point.

You can delete or rename the other files.

You may create subdirectories inside `src`. For faster rebuilds, only files inside `src` are processed by Webpack and BuckleScript. You can add new `scss` files anywhere in `src` and import them in your `.re` files.

## Run the project

In the project directory, you can:

### Install dependencies

`$ yarn install`

### Start the BuckleScript Compiler

`$ yarn start`

### Run the Webpack Development Server

`$ yarn webpack`

Runs Webpack and hosts your app on `http://localhost:3000`

The page will reload if you make edits.<br>
You will also see any lint errors in the console.
