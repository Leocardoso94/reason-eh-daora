// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var Expo = require("expo");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");

function make(region, style, children) {
  return ReasonReact.wrapJsForReason(Expo.MapView, {
              initialRegion: region,
              style: style
            }, children);
}

exports.make = make;
/* expo Not a pure module */
