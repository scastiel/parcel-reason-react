let component = ReasonReact.statelessComponent("Greeting");

let make = (~name, _children) => {
  ...component,
  render: (_self) =>
    <div>
      (ReasonReact.stringToElement("Hello "))
      <strong> (ReasonReact.stringToElement(name)) </strong>
      (ReasonReact.stringToElement("!"))
    </div>
};
