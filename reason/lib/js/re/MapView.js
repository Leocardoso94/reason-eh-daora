// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var ReactNativeMaps = require("react-native-maps");

function make(region, children) {
  return ReasonReact.wrapJsForReason(ReactNativeMaps.default, {
              region: region
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
