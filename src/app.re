let component = ReasonReact.statelessComponent "App";

let se = ReasonReact.stringToElement;
let make ::name _children => {
  ...component,
  render: fun self =>

    <div className="App">
      <HeaderItem name="header" />
      <HeaderSub name="subheader" />
      <SearchItem name="search" />

      <main>
        <MainTable name="table" />
      </main>

    </div>
};
