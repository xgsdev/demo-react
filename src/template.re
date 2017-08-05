let component = ReasonReact.statelessComponent "App";

let se = ReasonReact.stringToElement;
let make ::name _children => {
  ...component,
  render: fun self =>
    <div className="App">
      <div className="App-header">
        <h1> (se "Reason Projects") </h1>
      </div>
    </div>
};
