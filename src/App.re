type hls = {
  .
  [@bs.meth] "loadSource": string => unit,
  [@bs.meth] "attachMedia": Dom.element => unit,
};
[@bs.module] [@bs.new] external createHls: unit => hls = "hls.js";
[@bs.module "hls.js"] [@bs.val]
external isSupported: unit => bool = "isSupported";

let hls = createHls();
let src = "https://test-streams.mux.dev/x36xhzz/x36xhzz.m3u8";

// short hand
let s = React.string;

[@react.component]
let make = () => {
  <>
    <h1> {s("This is ReasonReact hls.js Player")} </h1>
    <video
      ref={ReactDOMRe.Ref.callbackDomRef(videoRef => {
        hls##loadSource(src);
        switch (Js.Nullable.toOption(videoRef)) {
        | Some(video) =>
          hls##attachMedia(video);
          ReactDOMRe.domElementToObj(video)##play();
        | None => ()
        };
      })}
    />
  </>;
};