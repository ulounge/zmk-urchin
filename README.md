French variant firmware for: [Urchin Keyboard](https://github.com/duckyb/urchin)


## The journey that leads to an Urchin keyboard
It all started several months ago. Thanks to reddit ErgoMechBoards community and associated Github repos, I could access to so many ergo keyboards to build.  
The specs I wanted were the following :
- 34 or 36 keys split keyboard aka 2 or 3 thumbs keys and 3 rows of 10 keys each.
- substential pinky column staggered
- low profile so Choc v1 switches and hotswap
- BLE (no cable)
- nice case available
There were so many options I had [to draw a diagram](https://drive.google.com/file/d/13gCpgxe-9pNNVhypWT9n905jhQcJiVr8/view?usp=drivesdk) to see more clearly.  
At the end of the day, 2 options remained, the 2 thumb keys Urchin or the 3 ones Temper. I went then to check how the 2 candidates supported both the keyboard build and the firmware.  
Urchin's super well documented for both his build and ZMK github repos. YT build video on top... What else?  
I had my winner with the Urchin. Giant kudos to [Kyek](https://github.com/duckyb) for his amazing job!  
I ordered a kit at [beekeeb.com](https://shop.beekeeb.com/product/urchin-diy-kit/)

### Layout - French & English efficiency -
As I was already switching from a normal azerty keyboard to a split staggered one I felt like going to the end of the road by switching layout too. Which one to go for though?  
Specs were basics. I need a modern layout optimized for both French AND English.  
This one was tough to find but I found with [ergo-L](https://ergol.org/) initiative the one that suits my needs.  
Punctations keys were already set the way I designed them on my side.  
The only alteration I have done is the layer key since on split keyboard the thumb keys are thought for this task.

### Switches - My perfect Thock sound is... no sound -
While lots of people are looking for the "thock" sound, I'm one of this kind who value silent overall.  
As I'm also part of the linear team, I went for the [lowprokb 35g Twilight Silent Chocs](https://lowprokb.ca/products/ambients-silent-choc-switches?srsltid=AfmBOopRWtGhUhVoAEuTwwwYn2TkReBH3BVdnLFynaudWlbZRrV0A0jW).  
Overall, I'm satisfied but I wish they were a bit heavier.

### KeyCaps - I love Japan -
At start I had blank keycaps but I felt like a bit of decoration would be nice to have.  
[MBK legends set](https://fkcaps.com/keycaps/mbk/legend-40s) got my attention but punctuation keys didn't match my layout...  
I had to go [custom](https://fkcaps.com/custom/) with the following specs in mind:
- Get rid of the roman legends, japanese symbols only.
- Replacing the Hiragana symbols that you can find on the lower right hand of the original MBK legends set with the corresponding Katakana symbols that I find more appealing.
- Substitutes for B and L do not exist in Katakana. It ended up to be a good thing because I wanted to use both フ and レ symbols wich are the main components of my company logo.
- Playstation pad buttons symbols for the thumb keys.

### End result

<details>
  <summary>The title of the image group</summary>
  <img src="image-url" alt="image-description"/>
  <img src="image-url" alt="image-description"/>
  <img src="image-url" alt="image-description"/>
</details>

## Getting started with the firmware

**Are you trying to make your own ZMK firmware?**  
[Here are the steps you need to take.](./GETTING_STARTED.md)

**Do you want to download my keymap?**  

> [!IMPORTANT]
> My firmware only matches the diagram below if the operating system is set to "French" keyboard input.  
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

