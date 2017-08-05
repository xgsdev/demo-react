let component = ReasonReact.statelessComponent "MainTable";

let se = ReasonReact.stringToElement;
let make ::name _children => {
  ...component,
  render: fun self =>

      <table className="card">
        <tr className="table-header">
          <td>(se "Number")</td>
          <td>(se "Name" )</td>
          <td>(se "Age" )</td>
          <td>(se "Job" )</td>
        </tr>
        <tr>
          <td>(se "521" )</td>
          <td>(se "Ben" )</td>
          <td>(se "23" )</td>
          <td>(se "Front End Dev" )</td>
        </tr>
        <tr>
          <td>(se "951" )</td>
          <td>(se "Zoe" )</td>
          <td>(se "21" )</td>
          <td>(se "Care Worker" )</td>
        </tr>
      </table>

};
