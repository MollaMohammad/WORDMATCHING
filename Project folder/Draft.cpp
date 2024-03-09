# include "iGraphics.h"
#define screenwidth 1000
#define screenheight 800

//int x = 200, y = 200, r1 =40 ;
/*
	function iDraw() is called again and again by the system.

	*/
int r=0,g=0,b=255;
//for cicle variable
int cx=100;
int cy=400;
int r2=10;
int x = 0 , y=0;
int dx=30;
int dy=30;

void iDraw() {
	//place your drawing codes here
	iClear();
	      //britto nora chora
	// iSetColor(20,200,50);
	// iFilledCircle(x, y, r1,1000);
	 iSetColor(r,g,b);
	 iFilledCircle(cx,cy,r2,1000);// choto britto
	//startting er code
	// iSetColor(0,204,255);
	// iSetColor(r,g,b);
	// iFilledRectangle(10, 30, 20, 20);
	// iSetColor(20, 200, 200);

	// iFilledRectangle(30,100,160,50);
	// iSetColor(r,g,b);
	// iFilledRectangle(30,300,160,50);
	// iSetColor(r,g,b);
	// iFilledRectangle(30,500,160,50);
	// iSetColor(r,g,b);
	// iFilledRectangle(30,700,160,50);
	// iSetColor(r,g,b);
	       // Bari bananor code
		//iText(40, 35, "Hi, I am iGraphics");
		// iSetColor(r,g,b);
		// iLine(x+100,y+500,x+500,y+750);
		// iSetColor(r,g,b);
		// iLine(x+900,y+500,x+500,y+750);
		// iSetColor(r,g,b);
		// iLine(x+500,y+160,x+500,y+340);
		// iSetColor(r,g,b);
		// iRectangle(x+150,y+100,700,400);
		// iSetColor(r,g,b);
		// iCircle(x+500,y+625,50);
		// iSetColor(r,g,b);
		// iRectangle(x+450,y+150,100,200);
		// iSetColor(r,g,b);
		// iCircle(x+500,y+250,10);
		// iSetColor(r,g,b);
		// iLine(x+100,y+500,x+900,y+500);
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	x=mx-150;
	y=my-20;
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		printf("x = %d, y= %d\n",mx,my);
		x =mx-150;
		y =my-150;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if( key == 'w' ){
		y+=10;
	}
	else if( key == 's' ){
		y-=10;
	}
	else if( key == 'a' ){
		x-=10;
	}
	else if( key == 'd' ){
		x+=10;
	}
	else if( key=='r'){
		r=255;
		g=0;
		b=0;
	}
	else if(key == 'g'){
		r=0;
		g=255;
		b=0;
	}
	else if(key == 'b'){
		r=0;
		g=0;
		b=255;
	}
    //placee your codes for other keys here
	// else if( key == g ){
	// 	r=0;
	// 	g=50;
	// 	b=0;
	// } 
	// else if( key== b){
	// 	r=0 ; 
	// 	g=0;
	// 	b=150;
	// }
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	else if( key == GLUT_KEY_HOME ){
		r=255;
		g=0;
		b=0;
	}
	//place your codes for other keys here
}
void change(){
	cx+=dx;
	cy+=dy;
	//r2 = rand()%30;
	r = rand()%255;
	g = rand()%255;
	b = rand()%255;
	if( cx >= screenwidth || cx <= 0 ){
		dx *= (-1);
	}
	else if( cy >= screenheight || cy <= 0 ){
		dy*=(-1);
	}
}


int main() {
	//place your own initialization codes here.
	iSetTimer(30,change);
	iInitialize(screenwidth, screenheight, "Word Matching");
	return 0;
}
