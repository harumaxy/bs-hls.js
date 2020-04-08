open MaterialUi;

[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();
  <div id="root">
    <ThemeProvider theme=MyTheme.theme>
      <AppBar>
        <Toolbar>
          <IconButton
            onClick={e => Js.log("open Menu!")} disabled=false color=`Inherit>
            <MscharleyBsMaterialUiIcons.Menu.Filled fontSize=`Large />
          </IconButton>
        </Toolbar>
      </AppBar>
      <Grid container=true justify=`Center alignItems=`Center>
        <Grid item=true xs=V2>
          <Container>
            <h2 id="sidebar"> {React.string({js|左サイド|js})} </h2>
          </Container>
        </Grid>
        <Grid item=true xs=V8>
          <Container>
            {switch (url.path) {
             | [] => <Player />
             //  | ["player"] => <Player />
             | ["login"] => <Login />
             | ["signup"] => <Signup />
             | _ => <h1> {React.string("404 Not found")} </h1>
             }}
          </Container>
        </Grid>
        <Grid item=true xs=V2>
          <Container>
            <h2 id="sidebar"> {React.string({js|右サイド|js})} </h2>
          </Container>
        </Grid>
      </Grid>
    </ThemeProvider>
  </div>;
};