# Example - WebKit2Gtk

This is example code to show how to package a simple program which uses Gtk4 and WebKit2Gtk

- Snap Package

and soon coming

- Flatpak Package
- AppImage Package

- Debian .deb Package
- RedHat .rpm Package


# Flatpak Building

Build and install with the following command:

```
flatpak-builder --user --install --force-clean ../build_example example/flatpak_manifest.yaml
```

After install, it's integrated in the gnome shell desktop.
You can run it nevertheless with the following command:

```
flatpak run app.filesqueezer.example
```
