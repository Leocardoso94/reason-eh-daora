// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Js_primitive = require("bs-platform/lib/js/js_primitive.js");
var RestaurantCard = require("./RestaurantCard.js");
var Text$BsReactNative = require("bs-react-native/lib/js/src/components/text.js");
var View$BsReactNative = require("bs-react-native/lib/js/src/components/view.js");
var Style$BsReactNative = require("bs-react-native/lib/js/src/style.js");

var restaurants = /* :: */[
  /* record */[
    /* name */"Caf\xc3\xa9 \xc3\x81rabe",
    /* lat */0.0,
    /* lng */0.0,
    /* cuisine : Arab */1
  ],
  /* :: */[
    /* record */[
      /* name */"Giggio",
      /* lat */0.0,
      /* lng */0.0,
      /* cuisine : Italian */0
    ],
    /* :: */[
      /* record */[
        /* name */"Paulinhos Grill",
        /* lat */0.0,
        /* lng */0.0,
        /* cuisine : Brazilian */2
      ],
      /* :: */[
        /* record */[
          /* name */"Landi",
          /* lat */0.0,
          /* lng */0.0,
          /* cuisine : Brazilian */2
        ],
        /* :: */[
          /* record */[
            /* name */"Alem\xc3\xa3o",
            /* lat */0.0,
            /* lng */0.0,
            /* cuisine : Other */3
          ],
          /* [] */0
        ]
      ]
    ]
  ]
];

function app() {
  var cards = List.mapi((function (i, r) {
          return ReasonReact.element(String(i), undefined, RestaurantCard.make(r, /* array */[]));
        }), restaurants);
  return ReasonReact.element(undefined, undefined, View$BsReactNative.make(undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, Js_primitive.some(Style$BsReactNative.style(/* :: */[
                            Style$BsReactNative.flex(1),
                            /* :: */[
                              Style$BsReactNative.justifyContent(/* Center */2),
                              /* :: */[
                                Style$BsReactNative.alignItems(/* Center */2),
                                /* [] */0
                              ]
                            ]
                          ])), undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined)(/* array */[
                  ReasonReact.element(undefined, undefined, Text$BsReactNative.make(undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, "Reason é da hora!", /* array */[])),
                  $$Array.of_list(cards)
                ]));
}

exports.restaurants = restaurants;
exports.app = app;
/* ReasonReact Not a pure module */