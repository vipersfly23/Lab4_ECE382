Lab4_ECE382
===========

Creating Ping Pong on LCD

###Objective and Purpose
The purpose of this lab is to incorporate knowledge of coding and lab 3 to write clean and maintainable modular code.

Required Functionality [COMPLETED]:
  
   Required functionality: "Create an etch-a-sketch program using the directional buttons of the LCD booster pack to 
   control the position of the paint brush. The paint brush will draw 8x8 blocks of pixels. The user will change the 
   position of the paint brush by pressing the directional buttons. Each button press will move the cursor 8 pixels in 
   the direction pressed (see table below). Pressing the auxiliary button (SW3) will toggle the mode of the paint brush 
   between filling squares and clearing squares." (ECE382.com)
   
   CHECKED OFF BY INSTRUCTOR
   
A & B Functionality [COMPLETED]:
  
    A & B Functionality: "Create Pong on your display! Create a single paddle that will move up and down on one side of the 
    display, controlled by the up and down buttons. The block will bounce off the paddle like it bounces off the wall. When
    the block misses hitting the paddle, the game will end." (ECE382.com)
    
    CHECKED OFF BY INSTRUCTOR
  
  
###Implementation  

  Implementation was simple and derived from simple "if" and "else" statements. The velocity of the ball is added to the 
  position and the display is cleared and redrawn in the new position. If the new position is out of the pre-determined 
  boundries the velocity is set to the negative of the current velocity.

###Code

Variable Definitions:

   *  xBall - The x coordinate position of the ball
   *  yBall - The y coordinate position of the ball
   *  xVel - The velocity of the x component of the ball
   *  yVel - The velocity of the y component of the ball
   *  yPad - The y coordinate position of the paddle
   *  xPad - The x coordinate position of the paddle
   *  TOP - Beginning of window, y coordinate.
   *  BOTTOM - END of window, y coordinate.
   *  RIGHT - END of window, x coordinate.
   *  LEFT - Beginning of window, x coordinate.
   *  TRUE - 1.
   *  FALSE - 0.
  
Subroutine Definition:
  
    * refreshDrawing - clears the display, draws the block and the paddle in the new location.
    * drawPad - Draws the paddle by calling the drawBlock methode twice.
  
Header:

![alt text](https://raw.githubusercontent.com/vipersfly23/Lab4_ECE382/master/header.GIF "HEADER CODE")

BODY:

![alt text](https://raw.githubusercontent.com/vipersfly23/Lab4_ECE382/master/main.GIF "MAIN BODY CODE")

SUBROUTINES:

![alt text](https://raw.githubusercontent.com/vipersfly23/Lab4_ECE382/master/subroutines.GIF "SUBROUTINES") 

##Result
  
  This lab was a success. Functionality was checked off by instructor. No images could be displayed due to misplacement of
  the MSP430. The block bounces off of the bottom, top, and right side of the screen. The block bounces off the paddle, but
  if it reaches the left side of the screen, the game will end.

###Debugging/Testing

#####Methodology

  
    My methodology was simplicity. I wanted to ensure that I didn't over complicate this lab and the coding involved so I kept
    to simple if and else statements and used subrotines only where it was neccessary such as refreshing the screen and drawing
    the paddle. I didn't feel a subroutine was required to check for the boundries because it could be simply defined in one
    simple if statement. The coding was straight forward.
   
    My biggest issue with this program was understanind the construct of C language. How to define variables, subroutines and
    constants. After asking my instructor for clarification and looking at given codes on ece382.com I was able to understand
    and complete the lab with no problem.

#####Commit 1

 Functioning required functionality.
  
#####Commit 2
  
   A & B Functionality completed.
   
#####Commit 3
    
  Added images of the code.
    
****All other commits are either to add comments to the program or to update the README file****

#####Testing:

The program worked great and verified by instructor. Very little testing was required, coding was straight forward.


###Conclusions/Lessons Learned
  In conclusion the program was a success. Subroutines were used where neccessary and understanding of clean and maintable was enforced. There aren't just numbers for the if and else statements but clear variable definition. The code is easy to
  follow. 

####Documentation:
  I used the ECE382.com website to access lab information and used the website to obtain the instruction sheet for the assembly
  language. I referenced the code from lecture 22 and built my code from the given nokia.asm and lec22.c files. I referenced stackoverflow.com on how to to exit a c program (exit(0)).
