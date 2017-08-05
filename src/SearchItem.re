let component = ReasonReact.statelessComponent "SearchItem";

let se = ReasonReact.stringToElement;
let make ::name _children => {
  ...component,
  render: fun self =>

    <div className="subnav">
      <div className="sn-item sn-btn">
        <button className="btn--raised btn-blue">(se "Bookmarks" )</button>
        <button className="btn--raised btn-blue">(se "Assigned" )</button>
      </div>
      <div className="sn-item">
        <input _type="text" placeholder="Search" />
      </div>
    </div>

};
