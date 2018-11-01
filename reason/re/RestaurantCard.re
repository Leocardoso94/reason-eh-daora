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
    <View style=Style.(style([padding(Pt(4.)), borderBottomColor(String("black")), borderBottomWidth(2.), flexGrow(1.)]))>
    <Text style=Style.(style([fontSize(Float(24.))]))>
        {ReasonReact.string(restaurant.name)}
    </Text>
    </View>
};
