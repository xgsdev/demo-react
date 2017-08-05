let component = ReasonReact.statelessComponent "FooterItem";

let se = ReasonReact.stringToElement;
let make ::name _children => {
  ...component,
  render: fun self =>

    <div className="sp-footer bg--silver">
      <div className="fitem fname">(se "Sentry Beta" )</div>
      <div className="fitem flinks">
        <span>(se "Contribute" )</span>
        <span>(se "Feedback" )</span>
      </div>
    </div>

};
