let component = ReasonReact.statelessComponent "HeaderItem";

let se = ReasonReact.stringToElement;
let make ::name _children => {
  ...component,
  render: fun self =>

    <header className="bg--gun-metal">
      <div className="logo animated tada">
        <svg width="24" height="24" viewBox="0 0 24 24">
          <path d="M19 1H5c-1.1 0-1.99.9-1.99 2L3 15.93c0 .69.35 1.3.88 1.66L12 23l8.11-5.41c.53-.36.88-.97.88-1.66L21 3c0-1.1-.9-2-2-2zm-9 15l-5-5 1.41-1.41L10 13.17l7.59-7.59L19 7l-9 9z"/>
        </svg>
      </div>
      <div className="topmenu">
        <div className="mitem"> (se "Lists") </div>
        <div className="mitem"> (se "Settings") </div>
        <div className="mitem shop">
          <svg width="24" height="24" viewBox="0 0 24 24">
            <path d="M7 18c-1.1 0-1.99.9-1.99 2S5.9 22 7 22s2-.9 2-2-.9-2-2-2zM1 2v2h2l3.6 7.59-1.35 2.45c-.16.28-.25.61-.25.96 0 1.1.9 2 2 2h12v-2H7.42c-.14 0-.25-.11-.25-.25l.03-.12.9-1.63h7.45c.75 0 1.41-.41 1.75-1.03l3.58-6.49c.08-.14.12-.31.12-.48 0-.55-.45-1-1-1H5.21l-.94-2H1zm16 16c-1.1 0-1.99.9-1.99 2s.89 2 1.99 2 2-.9 2-2-.9-2-2-2z"/>
          </svg>
        </div>
      </div>
    </header>


};
