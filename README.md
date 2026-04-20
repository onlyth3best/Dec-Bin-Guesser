# Dec-Bin-Guesser
a decimal/binary guessing game on a PCB!
(built with help from https://pathfinder.hackclub.com/)

<img width="630" height="500" alt="image of pcb" src="https://github.com/user-attachments/assets/3e4d9444-fa77-4c3e-bd1a-6a173b276803" />
<br/>
_20/04/2026:_
<br/> For now, the code is only for the decimal system guessing, as I haven't had time to test it out with the actual PCB yet. This is the idea, though:
<br/>- It'll begin with a level select, where you press either the left button (LB) or the right button (RB) to select decimal/binary guessing respectively.
<br/>- (Once you have selected a level, the PCB will generate a random number…)
<br/>- If the level is decimal guessing, the LB will add 10s while the RB will add 1s. The binary guessing is simmilar, except the LB will add 0s to a string instead.
<br/>- The centre button confirms your guess…
<br/>- if it's too large, the LED on the right will light up. If it's too small, the LED on the left will light up. Just right, and the centre will light up!
