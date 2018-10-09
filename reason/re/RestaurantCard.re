open BsReactNative;

type cuisine =
  | Italian
  | Arab
  | Brazilian
  | Other;

type restaurant = {
  name: string,
  lat: float,
  lng: float,
  cuisine: cuisine
};

let component = ReasonReact.statelessComponent("RestaurantCard");

let make = (~restaurant, _children) => {
  ...component, /* spread the template's other defaults into here  */
  render: _self =>
    <Text>
        {ReasonReact.string(restaurant.name)}
    </Text>
};
