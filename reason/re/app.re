open BsReactNative;

let restaurants: list(RestaurantCard.restaurant) = [
  {name: "Café Árabe", lat: -23.5744987, lng: -46.690489, cuisine: Arab},
  {name: "Giggio", lat: -23.5653385, lng: -46.6836678, cuisine: Italian},
  {name: "Paulinhos Grill", lat: 0.0, lng: 0.0, cuisine: Brazilian},
  {name: "Landi", lat: 0.0, lng: 0.0, cuisine: Brazilian},
  {name: "Alemão", lat: -27.5744987, lng: -46.690489, cuisine: Other},
];

let app = () => {
  Random.init(int_of_float(Js.Date.now()));

  let cards = List.mapi((i, r) => {
    <RestaurantCard
        restaurant=r
        key=string_of_int(i)
      />
  }, restaurants);

  <View style=Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]))>
    <MainView restaurants=restaurants />
  </View>};
