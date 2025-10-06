# Featurepack for the Bridge75 keyboard
This fork aims to seamlessly add more customization options to the behavior of the Bridge75 Keyboard. 
Current Features include:
- Smooth Battery Light Indication
- Easily modifiable maximum layer count
- thats it so far ._.

## Step by Step for people unfamilliar with everything:
1. Clone the code from this Repository
2. Set up everything to Build the Code
3. Choose your Features
4. Flash to your Keyboard 
5. (hopefully) enjoy

## How to enable/disable Features:
If you look into the folder keyboards/bridge75 you will find a rules.mk. There you can choose and edit the features to your liking. Now you just need to build everything and flash it to your Keyboard :)

## How to Build the code
When inside the project, run the following command from the terminal: 
```
make shortcut/bridge75/iso:default
```
Then, you should recieve a binary named something like "shortvut_bridge75_iso_default.bin". This is the file you ultimately flash onto your keyboard.

-> If you have an ansi keyboard you can just replace the iso with ansi. 

-> If you prefer to have a different keymap by default, you can just add a folder in the keymaps directory and copy your new layout there. (When compiling, keep in mind to replace the :default with the name of the folder containing you custom layout, so something like :custom)

## How to Flash to the keyboard 
For this, I recommend using [QMK Toolbox](https://qmk.fm/toolbox). For bringing the Keyboard into DFU (flash) mode, [this](https://monacokeys.de/pages/bridge75-firmware-update) Website (monacokeys.de) is very helpful.
