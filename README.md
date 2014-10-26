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
   *  
  
Subroutine Definition:
  
    * refreshDrawing - clears the display, draws the block and the paddle in the new location.
    * drawPad - Draws the paddle by calling the drawBlock methode twice.
    
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

  This commit was to add the finished code. (only about 20 lines were added)
  
#####Commit 2
  
   Added additional pictures / diagrams
   
#####Commit 3
    
  Added more pictures.

#####Commit 4
  
  Added more pictures.
    
****All other commits are either to add comments to the program or to update the README file****

#####Testing:

The testing could be verified by the image below. It shows the previous location of the box, by using the directional pads
I was able to draw a H:

 ![alt text](https://raw.githubusercontent.com/vipersfly23/LAB3_ECE382/master/result.jpg "Results")


###Conclusions/Lessons Learned
  In conclusion the program was a success. The understanding of command/data bits were greatly enhanced. 
  Understanding of how input and output pins are used in the MSP430 has greatly improved. Also the lab itself was success.
  Biggest lesson learned is that understanding a given code is the most important step, and it must be achieved before trying
  to add changes to the code.


####Documentation:
  I used the ECE382.com website to access lab information and used the website to obtain the instruction sheet for the assembly
  language. I received helped from Taylor Bodin on how to use the data analyzer and what to look for on the display. Erica Lewondski helped me set up the pins for the data analyzer and the MSP430. Dustin Weisner explained the two tables and the purpose of the two tables in the lab.
