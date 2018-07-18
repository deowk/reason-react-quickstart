let component = ReasonReact.statelessComponent("Page1");

let make = _children => {
  ...component,
  render: _self =>
    <div className="Page1">
      <ul>
        <li> ("Sass Compilation" |> ReasonReact.string) </li>
        <li> ("File and Url Loader" |> ReasonReact.string) </li>
        <li> ("Hot Reloading" |> ReasonReact.string) </li>
        <li> ("Routing" |> ReasonReact.string) </li>
        <li> ("Route Transitions" |> ReasonReact.string) </li>
      </ul>
    </div>,
};