let component = ReasonReact.statelessComponent "HeaderSub";

let se = ReasonReact.stringToElement;
let make ::name _children => {
  ...component,
  render: fun self =>
    <nav>
      <div className="hs-select">
        <select>
          <option>(se "Callback" )</option>
          <option>(se "Show All" )</option>
          <option>(se "Pending" )</option>
        </select>
      </div>
      <ul>
        <li>(se "Dashboard" )</li>
        <li>(se "Issues" )</li>
        <li>(se "Releases" )</li>
      </ul>
    </nav>

};
