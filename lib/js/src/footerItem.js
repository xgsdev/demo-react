// Generated by BUCKLESCRIPT VERSION 1.8.2, PLEASE EDIT WITH CARE
'use strict';

var React       = require("react");
var ReasonReact = require("reason-react/lib/js/src/reasonReact.js");

var component = ReasonReact.statelessComponent("FooterItem");

function se(prim) {
  return prim;
}

function make(_, _$1) {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return React.createElement("div", {
                  className: "sp-footer bg--silver"
                }, React.createElement("div", {
                      className: "fitem fname"
                    }, "Sentry Beta"), React.createElement("div", {
                      className: "fitem flinks"
                    }, React.createElement("span", undefined, "Contribute"), React.createElement("span", undefined, "Feedback")));
    });
  return newrecord;
}

exports.component = component;
exports.se        = se;
exports.make      = make;
/* component Not a pure module */
