open BsReactNative;

let restaurants: list(RestaurantCard.restaurant) = [
  {name: "Café Árabe", lat: 0.0, lng: 0.0, cuisine: Arab},
  {name: "Giggio", lat: 0.0, lng: 0.0, cuisine: Italian},
  {name: "Paulinhos Grill", lat: 0.0, lng: 0.0, cuisine: Brazilian},
  {name: "Landi", lat: 0.0, lng: 0.0, cuisine: Brazilian},
  {name: "Alemão", lat: 0.0, lng: 0.0, cuisine: Other},
];

let app = () => {
  let cards = List.mapi((i, r) => {
    <RestaurantCard
        restaurant=r
        key=string_of_int(i)
      />
  }, restaurants);
  let regiao = MapView.region_t(~latitude=-23.5720498, ~longitude=-46.6918662, ~latitudeDelta=0.09, ~longitudeDelta=0.04);

  <View style=Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]))>
    <Text value={js|Reason é da hora!|js} />
    /* (ReasonReact.array(Array.of_list(cards))) */

    <MapView region=regiao style=Style.(style([width(Pt(400.)), height(Pt(400.))]))>
        <Marker coordinate=regiao />
    </MapView>
  </View>};
