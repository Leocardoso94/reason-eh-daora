[@bs.module "react-native-maps"] external mapView: ReasonReact.reactClass = "default";

type region_t = {
  .
  latitude: float,
  longitude: float
};

[@bs.deriving abstract]
type jsProps = {
  /* `type` is reserved in Reason. use `type_` and make it still compile to the
    JS key `type` */
  /* [@bs.as "type"] type_: string, */
  region: region_t
};

let make = (~region, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=mapView,
    ~props=jsProps(
      ~region
    ),
    children,
  );
