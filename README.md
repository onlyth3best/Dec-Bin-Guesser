# Dec-Bin-Guesser
a decimal/binary guessing game on a PCB!
(built with help from https://pathfinder.hackclub.com/)

<img width="679" height="606" alt="Untitled design (4)" src="https://github.com/user-attachments/assets/d7ea9460-0b87-4f1d-a827-142a89f8f9fb" />


<br/> About the folders: /code has all the code, /prod has all the production files!
<img width="480" height="430" alt="image of schematics" src="https://github.com/user-attachments/assets/496c2890-b88b-43a6-85b4-b39d19ce8157" />
<br/> (An image of the schematics!)
<img width="560" height="405" alt="Snímek obrazovky 2026-05-07 v 17 25 38" src="https://github.com/user-attachments/assets/b7d828f8-7f06-40e7-8e22-d0a9c0bfed09" />
<br/> (pcb editor above, routing is a _little_ messy…)

<br/> note: PCB models are in pcb/kicad! other 3D models that were used were not sourced by me :)
<br/>
<br/>_20/04/2026:_
<br/> For now, the code is only for the decimal system guessing, as I haven't had time to test it out with the actual PCB yet. This is the idea, though:
<br/>- It'll begin with a level select, where you press either the left button (LB) or the right button (RB) to select decimal/binary guessing respectively.
<br/>- (Once you have selected a level, the PCB will generate a random number…)
<br/>- If the level is decimal guessing, the LB will add 10s while the RB will add 1s. The binary guessing is simmilar, except the LB will add 0s to a string instead.
<br/>- The centre button confirms your guess…
<br/>- if it's too large, the LED on the right will light up. If it's too small, the LED on the left will light up. Just right, and the centre will light up & the buzzer will sound!
<br/>- (_an alternative idea: another level, where the buzzer signals a timer… figure out the value before the time runs out!_)

<br/> in terms of code, I haven't fully done the firmware as I don't have the actual thing yet, but here's a guide for setting up the XIAO_RP2040 with Arduino: https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/
<br/> The firmware I've added is in progress as of now (21/04/26) and I will add setup steps in the future, when I have the physical PCB itself.
<br/>
<br/>Setup Guide (to be edited):
<br/>  -Connect to the XIAO, using the Arduino IDE
<br/>  -This link might help: https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/
<br/>  -The code should work… once I've finished polishing it (not completely done as of now…)

<br/> Wiring:
<br/> button1 = D0
<br/> button2 = D1
<br/> button3 = D2
<br/> LED1 = D3
<br/> LED2 = D4
<br/> LED3 = D5
<br/> buzzer1 = D6 (P0_D6_TX)

<br/>
<br/>Assembly instructions, for now:
<br/>~ Solder these things onto the PCB, according to the schematics:
<br/>~ - XIAO_RP_2040
<br/>~ - three LEDs
<br/>~ - three resistors
<br/>~ - three buttons
<br/>~ - buzzer
<br/>~ After this, connect the board to the power, this link could help: https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/
<br/>also Flash instructions:
<br/> - install ArduinoIDE, https://docs.arduino.cc/software/ide/
<br/> - add the support for the RP2040 (Preferences > Additional Board Manager URLs > "https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json")
<br/> - connect the XIAO RP_2040 via USB
<br/> - upload the code from this repo in /firmware!

PCB BOM:
<br/>
<br/>
<br/>

| Reference  | Qty | Value | approx price in USD | links I found|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| U1  | 1 | Seeed Studio XIAO RP2040 | $ 3.9 | [link](https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html?srsltid=AfmBOor69gTiD1i0IEN-NgJbt-CYkVZTgTP96P1gkFrOACfPGnEJtVJv) / microcontroller board |
| D1, D2, D3  | 3 | LED / L08R5000Q1 | $ 0.1 | https://jlcpcb.com/partdetail/JLCPCBAssembly-LED_NCD0805C1/C9900035298 |
| R1, R2, R3  | 3 | resistor | $ 0.01 | https://jlcpcb.com/partdetail/TyoHM-RMC_0603_10K_JN/C5362358 |
| SW1, Sw2, SW3  | 3 | Button/Switch | $ 0.5 | [https://jlcpcb.com/partdetail/ESwitch-TL3301AF160QG/C273519 |
| BZ1  | 1 | Buzzer | % 0.5 | https://jlcpcb.com/partdetail/Jiangsu_HuanengElec-HND2310B/C2877 |

<br/> planning to source from JLCPCB (apologies if the BOM is wrong, I'm new to this)



<br/>
<br/>Why did I build it? Well, I don't have many pocket-games– games I can play while travelling, etc. Plus, I haven't made many hardware projects in the past, so this is sort of my first attempt at designing a PCB, which I'd say was my main motivation.

<img width="540" height="828" alt="DecBinTHISONE" src="https://github.com/user-attachments/assets/6ed9669e-9cae-47e6-9d43-db15e5a4d5b5" />

