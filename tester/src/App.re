open BsReactNative;

module Main = {
  let component = ReasonReact.statelessComponent("Main");

  let make = _children => {
    ...component,
    render: _self =>
      <View> <Text> {ReasonReact.string("Dupa")} </Text> </View>,
  };
};

/* let app = () => <Main />; */
let app = () => <Main />;