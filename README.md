# Dec-Bin-Guesser
a decimal/binary guessing game on a PCB!
(built with help from https://pathfinder.hackclub.com/)

<img width="630" height="500" alt="image of pcb" src="https://github.com/user-attachments/assets/3e4d9444-fa77-4c3e-bd1a-6a173b276803" />
<br/> About the folders: /code has all the code, /prod has all the production files, /other has miscellaneous like schematic and editor files.
<img width="480" height="430" alt="image of schematics" src="https://github.com/user-attachments/assets/496c2890-b88b-43a6-85b4-b39d19ce8157" />
<br/> (An image of the schematics!)
<img width="839" height="614" alt="Snímek obrazovky 2026-04-21 v 6 38 06" src="https://github.com/user-attachments/assets/44ffe46a-66f6-4c3a-bf11-16e5771e6cf1" />
<br/> wiring/schematic diagram:

<br/> note: PCB models are in pcb/kicad !
<br/>
<br/>_20/04/2026:_
<br/> For now, the code is only for the decimal system guessing, as I haven't had time to test it out with the actual PCB yet. This is the idea, though:
<br/>- It'll begin with a level select, where you press either the left button (LB) or the right button (RB) to select decimal/binary guessing respectively.
<br/>- (Once you have selected a level, the PCB will generate a random number…)
<br/>- If the level is decimal guessing, the LB will add 10s while the RB will add 1s. The binary guessing is simmilar, except the LB will add 0s to a string instead.
<br/>- The centre button confirms your guess…
<br/>- if it's too large, the LED on the right will light up. If it's too small, the LED on the left will light up. Just right, and the centre will light up & the buzzer will sound!
<br/>- (_an alternative idea: another level, where the buzzer signals a timer… figure out the value before the time runs out!_)

<br/>
<br/>Why did I build it? Well, I don't have many pocket-games– games I can play while travelling, etc. Plus, I haven't made many hardware projects in the past, so this is sort of my first attempt at designing a PCB, which I'd say was my main motivation.

<img width="540" height="828" alt="Frame 1" src="https://github.com/user-attachments/assets/01f51cab-ef85-47ac-a1d4-e88d600ffc3c" />

<br/> in terms of code, I haven't fully done the firmware as I don't have the actual thing yet, but here's a guide for setting up the XIAO_RP2040 with Arduino: https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/
<br/> The firmware I've added is in progress as of now (21/04/26) and I will add setup steps in the future, when I have the physical PCB itself.

<br/> Wiring:
<br/> button1 = D0
<br/> button2 = D1
<br/> button3 = D2
<br/> LED1 = D3
<br/> LED2 = D4
<br/> LED3 = D5
<br/> buzzer1 = D6 (P0_D6_TX)


PCB BOM:
<br/>
<br/>
<br/>

| Reference  | Qty | Value | Links/Other |
| ------------- | ------------- | ------------- | ------------- |
| U1  | 1 | Seeed Studio XIAO RP2040 | https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html?srsltid=AfmBOor69gTiD1i0IEN-NgJbt-CYkVZTgTP96P1gkFrOACfPGnEJtVJv / microcontroller board |
| D1, D2, D3  | 3 | LED / L08R5000Q1 | link |
| R1, R2, R3  | 3 | resistor | link |
| SW1, Sw2, SQ3  | 3 | Button/Switch | link |
| BZ1  | 1 | Buzzer | link |

<br/> planning to source from JLCPCB (apologies if the BOM is wrong, I'm new to this)
