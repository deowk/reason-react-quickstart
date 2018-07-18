type routes =
  | Page1
  | Page2;

let routeToString =
  fun
  | Page1 => "/"
  | Page2 => "/page2";

let urlToRoute: ReasonReact.Router.url => routes =
  url =>
    switch (url.path) {
    | ["page2"] => Page2
    | _ => Page1
    };

let routeToTitle = route =>
  switch (route) {
  | Page1 => "Page1"
  | Page2 => "Page2"
  };

let routeToComponent = currentRoute => {
  let withCSSTransition = (component, route) =>
    <ReactTransitionGroup.CSSTransition
      show=true
      timeout=900
      key=(routeToTitle(route))
      classNames="routeTransition">
      component
    </ReactTransitionGroup.CSSTransition>;
  switch (currentRoute) {
  | Page1 => withCSSTransition(<Page1 />, Page1)
  | Page2 => withCSSTransition(<Page2 />, Page2)
  };
};