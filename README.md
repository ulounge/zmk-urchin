French variant firmware for: [Urchin Keyboard](https://github.com/duckyb/urchin)

## Getting started

**Are you trying to make your own ZMK firmware?**  
[Here are the steps you need to take.](./GETTING_STARTED.md)

**Do you want to download my keymap?**  

> [!IMPORTANT]
> My firmware only matches the following diagram if the operating system is set to "French" keyboard input.
> All good on Windows, some issues on Android (list of not working keys to do).

> [!WARNING]
> My firmware includes a call to a module to display an animation on the right screen. See [GPeye repo](https://github.com/GPeye/urchin-peripheral-animation) for more information. Fork his repository to create your own animation.
> Edit both [west.yml](config/west.yml) and [buid.yaml](buid.yaml) files if you don't want this feature. See comments in files.

[Download the firmware zip from the latest action run.](https://github.com/ulounge/zmk-urchin/actions/workflows/build.yml?query=is%3Asuccess+branch%3Amaster) Check [the ZMK docs](https://zmk.dev/docs/user-setup#installing-the-firmware) for instructions on how to flash it.

## Keymap Layers & In depth Logic
  ### Navigation
  [Sticky Layer behavior](https://zmk.dev/docs/keymaps/behaviors/sticky-layer) are used to navigate to layers.
  [Tap Dance behavior](https://zmk.dev/docs/keymaps/behaviors/tap-dance) to quickly select a layer when two of them are attached to the same key.
  The most used layers (accents and ext) are reachable in one tap.
  Both Shift key and Short Cuts layer are embeded in [hold-tap behaviors](https://zmk.dev/docs/keymaps/behaviors/hold-tap) in hold state while space and enter keys are stroke trough tap behavior respectively.

  ### Base Layer
  Variant of Ergo-L layout optimized for both English & French.
  The original layer key position has changed since thumbs take care of layer management.
  A hold(")-tap(') key takes its place as these symbols are very useful in French.
  Capitals are stroke by holding the corresponding keys.

  ### Short Cuts Layer
  Custom system short cuts. Fancy zones, Media controls & Philips lights management.
  Basically, personal working environments short cuts here, may not apply to your set up.

  ### Accent Layer
  All most common french accents and most used symbols as well.

  ### Num Layer
  Numeric keypad (right), less used symbols and dead keys.

  ### Ext Layer
  Most common short cuts, home row mods and navigation keys.

  ### Fnc Layer
  Function keys and home row mods.

  ### Settings Layer
  BLE selector and unpair, Bootloader mode, Windows macro to turn the computer off.

## Keymap Cheat Sheet

This layout is inspired by [Duckyb's](https://github.com/duckyb/zmk-urchin)


<div align="center">
  
  ![sweep-layout](assets/My_Uchin.drawio.svg)

</div>

*This diagram was created using draw.io*  
*Click [HERE](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=My%20Uchin%20V2.drawio.png#Uhttps%3A%2F%2Fdrive.google.com%2Fuc%3Fid%3D1-JAsnpWjMbz9zqAcpNJUgRKA_k3xYO6e%26export%3Ddownload) to view a copy that you can edit*

