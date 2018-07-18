[%bs.raw {|require('normalize-scss')|}];

[%bs.raw {|require('./index.scss')|}];

ReactDOMRe.renderToElementWithId(
  <Router.WithRouter>
    ...((~currentRoute) => <App currentRoute />)
  </Router.WithRouter>,
  "root",
);