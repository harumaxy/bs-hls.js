let theme =
  MaterialUi_Theme.create(
    MaterialUi_ThemeOptions.(
      make(
        ~palette=
          PaletteOptions.make(
            ~primary=
              Primary.make(
                ~main="#ff3d00",
                ~light="#76d275",
                ~dark="#00701a",
                (),
              ),
            ~secondary=
              Secondary.make(
                ~main="#f44336",
                ~light="#ff7961",
                ~dark="#ba000d",
                (),
              ),
            (),
          ),
        (),
      )
    ),
  );