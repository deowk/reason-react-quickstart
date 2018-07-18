[%bs.raw {|require('./app.scss')|}];

[@bs.module] external logo : string = "../../assets/logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (~currentRoute, _children) => {
  ...component,
  render: _self =>
    <div className="App">
      <div className="App-header">
        <div className="logo-container">
          <img src=logo className="App-logo" alt="logo" />
        </div>
        <h2> (ReasonReact.string("ReasonReact Starter")) </h2>
      </div>
      <nav>
        <Router.NavLink route=Page1 className="navButton">
          (ReasonReact.string("Page 1"))
        </Router.NavLink>
        <Router.NavLink route=Page2 className="navButton">
          (ReasonReact.string("Page 2"))
        </Router.NavLink>
      </nav>
      <main>
        <ReactTransitionGroup.TransitionGroup>
          (Config.routeToComponent(currentRoute))
        </ReactTransitionGroup.TransitionGroup>
      </main>
    </div>,
};