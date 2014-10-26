//-------------------------------------------------------------------------------
//	Name:		C2C Hunter Her
//	Term:		Fall 2014
//	MCU:		MSP430G2553
//	Lecture:	22
//	Date:		23 October 2014
//	Note:		Ping Pong Game
//-------------------------------------------------------------------------------
#include <msp430g2553.h>
 #include <stdlib.h>


extern void init();
extern void initNokia();
extern void clearDisplay();
extern void drawBlock(unsigned char row, unsigned char col);

void refreshDrawing(unsigned char yBall, unsigned char xBall, unsigned char yPad, unsigned char xPad);
void drawPad(unsigned char yPad, unsigned char xPad);

typedef	unsigned long int16;

#define		TRUE			1
#define		FALSE			0
#define		UP_BUTTON		(P2IN & BIT5)
#define		DOWN_BUTTON		(P2IN & BIT4)
#define		AUX_BUTTON		(P2IN & BIT3)
#define		LEFT_BUTTON		(P2IN & BIT2)
#define		RIGHT_BUTTON	(P2IN & BIT1)


void main() {

	unsigned char	xBall, yBall,xVel, yVel,yPad,xPad;
	int16 i;

	// === Initialize system ================================================
	IFG1=0; /* clear interrupt flag1 */
	WDTCTL=WDTPW+WDTHOLD; /* stop WD */

	xPad=0; yPad=4;

	init();
	initNokia();
	clearDisplay();
	xBall=4;		yBall=4;
	xVel=1; yVel=1;
	drawBlock(yBall,xBall);
	drawPad(yPad, xPad);

	while(1) {


				if (yBall<1||yBall>=7) yVel=-yVel;

				if (xBall<1||xBall>10) xVel=-xVel;

				xBall +=xVel;
				yBall +=yVel;

				if(xBall==1){
					if(yBall>=(yPad)&&yBall<=(yPad+1)) xVel=-xVel;

				}

				if(UP_BUTTON==0){
					if(yPad>=1){
						yPad=yPad-1;
					}
				}

				if(xBall==0){
					exit(0);
				}

				if(DOWN_BUTTON==0){
									if(yPad<6){
										yPad=yPad+1;
									}
								}

				refreshDrawing(yBall,xBall,yPad,xPad);
				//__delay_cycles (100000);
				for (i=1 ; i<500000; i++) ;


			}




}

void refreshDrawing(unsigned char yBall, unsigned char xBall,unsigned char yPad, unsigned char xPad){
	clearDisplay();

	drawBlock(yBall,xBall);
	drawPad(yPad,xPad);
}

void drawPad(unsigned char yPad, unsigned char xPad){
	drawBlock(yPad,xPad);
	drawBlock(yPad+1,xPad);
}
