French variant firmware for: [Urchin Keyboard](https://github.com/duckyb/urchin)

## Getting started

**Are you trying to make your own ZMK firmware?**  
[Here are the steps you need to take.](./GETTING_STARTED.md)

**Do you want to download my keymap?**  

> [!IMPORTANT]
> My firmware only matches the following diagram if the operating system is set to "French" keyboard input.
> All good on Windows, some issues on Android (list of not working keys to do).

> [!WARNING]
> My firmware includes a call to a module to display an animation on the right screen. See link for more information. Fork his repository to create your own animation.
> Edit both west.yml and buid.yaml files if you don't want this feature. See comments in files.

[Download the firmware zip from the latest action run.](https://github.com/ulounge/zmk-urchin/actions/workflows/build.yml?query=is%3Asuccess+branch%3Amaster) Check [the ZMK docs](https://zmk.dev/docs/user-setup#installing-the-firmware) for instructions on how to flash it.

## Keymap Layers & In depth Logic
  ### Base Layer
  Variant of Ergo-L layout optimized for both English & French.
  The original layer key position has changed since thumbs take care of layer management.
  A hold(")-tap(') key takes its place.
  Capitals are stroke by holding key.
  ### Short Cuts Layer
  Custom system short cuts. Fancy zones, Media controls & Philips lights management.

## Keymap Cheat Sheet

This layout is inspired by [Duckyb's](https://github.com/duckyb/zmk-urchin)


<div align="center">
  
  ![sweep-layout](assets/My_Uchin.drawio.svg)

</div>

*This diagram was created using draw.io*  
*Click [HERE](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=My%20Uchin%20V2.drawio.png#Uhttps%3A%2F%2Fdrive.google.com%2Fuc%3Fid%3D1-JAsnpWjMbz9zqAcpNJUgRKA_k3xYO6e%26export%3Ddownload) to view a copy that you can edit*

