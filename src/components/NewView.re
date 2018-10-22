[@bs.module "react-native"]
external viewNativeComponent: ReasonReact.reactClass = "ViewNativeComponent";

let make = children =>
  ReasonReact.wrapJsForReason(
    ~reactClass=viewNativeComponent,
    ~props=Js.Obj.empty(),
    children,
  );