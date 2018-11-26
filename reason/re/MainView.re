open BsReactNative;

type state = {
  restaurants: list(RestaurantCard.restaurant),
  restaurant: option(RestaurantCard.restaurant),
};

type action =
  | Click;

let component = ReasonReact.reducerComponent("MainView");

let make = (~restaurants, _children) => {
  ...component, /* spread the template's other defaults into here  */
  initialState: () => {restaurants, restaurant: None},
  reducer: (action, state) =>
    switch (action) {
    | Click =>
      ReasonReact.Update({
        ...state,
        restaurant:
          Some(
            List.nth(
              state.restaurants,
              Random.int(List.length(state.restaurants)),
            ),
          ),
      })
    },
  render: self => {
    Js.log(self.state.restaurant);

    <View
      style=Style.(
        style([flex(1.), justifyContent(Center), alignItems(Center)])
      )>
      <Text value={js|Reason é da hora!|js} />
      /* (ReasonReact.array(Array.of_list(cards))) */
      {
        switch (self.state.restaurant) {
        | None => <Text value="Escolha o restaurante"/>
        | Some(r) =>
          let regiao =
            MapView.region_t(
              ~latitude=r.lat,
              ~longitude=r.lng,
              ~latitudeDelta=0.09,
              ~longitudeDelta=0.04,
            );

          <MapView
            region=regiao
            style=Style.(style([width(Pt(400.)), height(Pt(400.))]))>
            <Marker coordinate=regiao />
          </MapView>;
        }
      }
      <Button
        title="Escolher restaurante"
        onPress={_event => self.send(Click)}
      />
    </View>;
  },
};
