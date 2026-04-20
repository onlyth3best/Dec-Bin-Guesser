# Dec-Bin-Guesser
a decimal/binary guessing game on a PCB!
(built with help from https://pathfinder.hackclub.com/)

<img width="711" height="518" alt="Snímek obrazovky 2026-04-20 v 11 08 56" src="https://github.com/user-attachments/assets/48b7cfe4-ebb3-4bb7-9ba1-deda76ec6a97" />


20/04/2026
For now, the code is only for the decimal system guessing, as I haven't had time to test it out with the actual PCB yet. This is the idea, though:
- It'll begin with a level select, where you press either the left button (LB) or the right button (RB) to select decimal/binary guessing respectively.
- (Once you have selected a level, the PCB will generate a random number…)
- If the level is decimal guessing, the LB will add 10s while the RB will add 1s. The binary guessing is simmilar, except the LB will add 0s to a string instead.
- The centre button confirms your guess…
- if it's too large, the LED on the right will light up. If it's too small, the LED on the left will light up. Just right, and the centre will light up!
