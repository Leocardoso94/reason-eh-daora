[@bs.module "expo"] external mapView: ReasonReact.reactClass = "MapView";

[@bs.deriving abstract]
type region_t = {
  latitude: float,
  longitude: float,
  latitudeDelta: float,
  longitudeDelta: float,
};

[@bs.deriving abstract]
type jsProps = {
  /* `type` is reserved in Reason. use `type_` and make it still compile to the
    JS key `type` */
  /* [@bs.as "type"] type_: string, */
  region: region_t,
};

/* AIzaSyAn6-fa5MvxTP0oHSE0SYUAJ18kD7AUtTI */

let make = (~region, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=mapView,
  ~props={
    "region": region,
    "style": style
  },
    children,
  );
