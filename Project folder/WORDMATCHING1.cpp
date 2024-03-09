# include "iGraphics.h"

int x = 300, y = 300, r = 20;
int xl1,yl1,xl2,yl2,rl=rand()%255,gl=rand()%255,bl=rand()%255;
/*
	function iDraw() is called again and again by the system.

	*/
int scene = 0;
int count = 0;
int line31 = 0,line311 = 0,line32 = 0,line322 = 0,line33 = 0,line333 = 0,line34 = 0,line344 = 0,line35 = 0,line355 = 0,line36 = 0,line366 = 0;
int line41 = 0,line411 = 0,line42 = 0,line422 = 0,line43 = 0,line433 = 0,line44 = 0,line444 = 0,line45 = 0,line455 = 0,line46 = 0,line466 = 0;
int line51 = 0,line511 = 0,line52 = 0,line522 = 0,line53 = 0,line533 = 0,line54 = 0,line544 = 0,line55 = 0,line555 = 0,line56 = 0,line566 = 0;
int line61 = 0,line611 = 0,line62 = 0,line622 = 0,line63 = 0,line633 = 0,line64 = 0,line644 = 0,line65 = 0,line655 = 0,line66 = 0,line666 = 0;
int line3111 = 0;
int horse = 0;
int count1 = 0;
char pic[20][80]={"Pic\\1.bmp","Pic\\2.bmp","Pic\\3.bmp","Pic\\4.bmp","Pic\\7.bmp","Pic\\5.bmp","Pic\\6.bmp","Pic\\8.bmp"};
int picIndex= 0;
void iDraw() {
	// place your drawing codes here
	// iSetColor(20, 200, 200);
	// iFilledCircle(x, y, r);
	// iFilledRectangle(10, 30, 20, 20);
	// iSetColor(20, 200, 0);
	// iText(40, 40, "Hi, I am iGraphics");
	// if( scene++ || scene-- ){
	// 	iClear();
	// }
	if( scene == 0 ){
		iClear();
		iShowBMP(0,0,pic[picIndex]);
	}
	// home page
	else if( scene == 1 ){
		iClear();
		iShowBMP(0,0,pic[1]);
	}
	// game er vitore  kaj
	else if( scene == 2){
		iClear();
		iShowBMP(0,0,pic[2]);
		// iSetColor( 175,150,220);
		// iFilledRectangle( 870,30,170,40);
		// iSetColor(0,0,0);
		//iText(870,40,"Submit Answer", GLUT_BITMAP_TIMES_ROMAN_24);
		// if( line1 == 1 && line2 == 1  ){
		// 	iSetColor(0,240,220);
		// 	iFilledRectangle(`)
		// }
 	}
	else if( scene == 3){ // amimals
		iClear();
		iShowBMP(0,0,pic[3]);  // Animals
		iText(850,50,"NEXT");
		iText(300,50,"PREVIOUS");
		if(  line31 == 1 && line311 == 1 ){
			iSetColor(0,255,0);
			iLine(243,671,505,480);
		}
		if( line32 == 1 && line322 == 1 ){
			iSetColor(0,255,0);
			iLine(245,409,437,143);
		}
		if( line33 == 1 && line333 == 1 ){
			iSetColor(0,255,0);
			iLine(243,144,445,583);//elephant		
		}
		if( line34 == 1 && line344 == 1 ){
			iSetColor(0,255,0);
			iLine(937, 672,704, 368);//bear		
		}
		if( line35 == 1 && line355 == 1 ){
			iSetColor(0,255,0);
			iLine(938,420,736,710);//Horse		
		}
		if( line36 == 1 && line366 == 1 ){
			iSetColor(0,255,0);
			iLine(938,140,741,274);// Rabbit		
		}
		// if( horse == 1 ){
		// 	iSetColor(30,40,199);
		// 	iFilledRectangle(500,440,200,100);
		// }
		
	}	
	else if( scene == 4){ //Birds
		iClear();
		iShowBMP(0,0,pic[4]);  // Birds
		iText(850,50,"NEXT");
		iText(300,50,"PREVIOUS");
		if( line41 == 1 && line411 == 1 ){  // Pigeons
			iSetColor(0,255,0);
			iLine(245,670,450,115); // 1 to 6		
		}
		if( line42 == 1 && line422 == 1 ){  // Dove
			iSetColor(0,255,0);
			iLine( 245 , 410 , 455 , 350 ); // 2 to 4		
		}
		if( line43 == 1 && line433 == 1 ){  // Crow
			iSetColor(0,255,0);
			iLine(245 , 136 , 455 , 585 ); // 3 to 2		
		}
		if( line44 == 1 && line444 == 1 ){  // Parrot
			iSetColor(0,255,0);
			iLine( 935 , 670 , 730 , 465 ); // 4 to 3		
		}	
		if( line45 == 1 && line455 == 1 ){  // Penguin
			iSetColor(0,255,0);
			iLine( 935 , 410 , 730 , 700 ); // 5 to 1		
		}
		if( line46 == 1 && line466 == 1 ){  // Owl
			iSetColor(0,255,0);
			iLine( 935 , 145 , 730 , 235 ); // 6 to 5	
		}
		// iText(850,50,"NEXT");
		// iText(300,50,"PREVIOUS");
    }
	else if( scene == 5){ //Colors
		iClear();
		iShowBMP(0,0,pic[5]);  // Colors
		iText(850,50,"NEXT");
		iText(300,50,"PREVIOUS");
		if( line51 == 1 && line511 == 1 ){ // violet
			iSetColor(0,255,0);
			iLine(245 , 670 ,455 , 585 ); // 1 to 2	
			//0
		}	if( line52 == 1 && line522 == 1 ){ //Green
			iSetColor(0,255,0);
			iLine(245 , 410 , 455 , 350 ); 	// 2 to 4
			//0
		}
		if( line53 == 1 && line533 == 1 ){ // Red
			iSetColor(0,255,0);
			iLine( 246 , 136 , 450 , 115 ); 	// 3 to 6
			//0
		}
		if( line54 == 1 && line544 == 1 ){ // Blue
			iSetColor(0,255,0);
			iLine( 935 , 670 , 730 , 235 ); 	// 4 to 5
			//0
		}
		if( line55 == 1 && line555 == 1 ){ // Orange 
			iSetColor(0,255,0);
			iLine(935 , 410 , 730 , 700 ); 	// 5 to 1
			//0
		}
		if( line56 == 1 && line566 == 1 ){ // Yellow
			iSetColor(0,255,0);
			iLine( 935 , 145 , 730 , 465 ); 	// 6 to 3
			//0
		}
		
    }
	else if( scene == 6){ // Fruits
		iClear();
		iShowBMP(0,0,pic[6]);
		iText(850,50,"NEXT");
		iText(300,50,"PREVIOUS");  //
		if( line61 == 1 && line611 == 1 ){
			iSetColor(0,255,0);
			iLine(245 , 670 , 455 , 115 );	// 1 to 6
		}	
		if( line62 == 1 && line622 == 1 ){
			iSetColor(0,255,0);
			iLine(245 , 410 , 455 , 465 );	// 2 to 3
		}
		if( line63 == 1 && line633 == 1 ){
			iSetColor(0,255,0);
			iLine(245 , 136 , 455 , 700 );	// 3 to 1
		}
		if( line64 == 1 && line644 == 1 ){
			iSetColor(0,255,0);
			iLine( 935 , 670 , 730 , 235 );	// 4 to 5
		}
		if( line65 == 1 && line655 == 1 ){
			iSetColor(0,255,0);
			iLine( 935 , 410 ,730 , 585 );	// 5 to 2
		}
		if( line66 == 1 && line666 == 1 ){
			iSetColor(0,255,0);
			iLine( 935 , 145 , 730 , 350 );	// 6 to 4
		}
		// iText(850,50,"NEXT");
		// iText(300,50,"PREVIOUS");
    }
	else if( scene == 7 ){
		iClear();
		iShowBMP(0,0,pic[7]);
		iText(595,200,"EXIT");
	}
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
	// if( scene == 3 ){
	// 	if(mx>=500 && mx<=705 && my>=440 && my<=515  ){
	// 		horse = 1;
	// 	}else{
	// 		horse = 0;
	// 	}
	// }
}
/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
	if( scene == 0 &&  mx>=0 && mx<=1200 && my>=0 && my<=800 ){
			scene = 1;
	}
	else if( scene == 1 &&  mx>=700 && mx<=800 && my>=350 && my<= 450 ){
		//scene = 0 ;
		exit(0);
	}
	else if( scene == 0 &&  mx>=443 && mx<=756 && my>=318 && my<=461 ){
 			scene = 1;
	}
	else if( scene ==1 ){
		if(mx>=0 && mx<=1200 && my>=0 && my<=800){
			scene = 2;
		}
		
	}
	else if( scene == 2 ){
		if( (mx>=120 && mx<=520 && my>=490 && my<=760)  ){
			scene = 3; // animals slide
		}
		if( (mx>=680 && mx<=1085 && my>=470 && my<=740) ){
			scene = 4; // birds slide
		}
		if( (mx>=120 && mx<=520 && my>=80 && my<=350) ) {
			scene = 5 ; // colors slide
		}
		if( (mx>=680 && mx<=1085 && my>=80 && my<=350) ) {
			scene = 6 ; // Fruits slide
		}
	}
	// animals slide
	else if( scene == 3 ){
		//lion
		if( mx>=217 && mx<=275 && my>=640 && my<=700){
			line31 = 1;  
		}
		if( line31 == 1 && (mx>=500 && mx<=705 && my>=440 && my<=515) ){
			line311 = 1;
		}
		// //monkey
		if( mx>=217 && mx<=275 && my>=380 && my<=440){
			line32=1;
			
		}
		if( line32 == 1 && mx>=430 && mx<=765 && my>=105 && my<=190 ){
			line322 = 1;
		}
		//elephant
		if( mx>=217 && mx<=275 && my>=110 && my<=175){
			line33=1;
		}
		if( line33 == 1 && mx>=440 && mx<=765 && my>=540 && my<=625 ){
			line333 = 1;
		}
		//bear
		if( mx>=910 && mx<=965 && my>=645 && my<=695){
			line34=1;
		}
		if( line34 == 1 && mx>=510 && mx<=705 && my>=330 && my<=405 ){
			line344 = 1;
		}
		// Horse
		if( mx>=910 && mx<=965 && my>=390 && my<=450){
			line35=1;
		}
		if( line35 == 1 &&  mx>=470 && mx<=740 && my>=660 && my<=750){
			line355 = 1;
		}
		// Rabbit
		if( mx>=910 && mx<=965 && my>=130 && my<=190){
			line36=1;
		}
		if( line36 == 1 && mx>=465 && mx<=740 && my>=240 && my<=315 ){
			line366 = 1;
		}
		if( mx >= 845 && mx <= 885 && my >=48 && my<= 62 ){
			scene = 4;
		}
		if( mx >= 295 && mx <= 370 && my >=48 && my<= 62 ){
			scene = 2;
		}

 	}
	//  Birds slide
	else if( scene == 4 ){
		//pigeons
		if(  mx>=220 && mx<=270 && my>=640 && my<=700 ){
			line41 = 1; 
		}
		if( line41 == 1 &&  mx>=450 && mx<=730 && my>=60 && my<=160 ){ // 6 no box
			line411 = 1;
		}
		// Dove
		if(  mx>=220 && mx<=270 && my>=380 && my<=440 ){
			line42 = 1; 
		}
		if( line42 == 1 &&  mx>=450 && mx<=730 && my>=300 && my<=400 ){ // 4 no box
			line422 = 1;
		}
		// Crow
		if(  mx>=220 && mx<=270 && my>=110 && my<=165 ){
			line43 = 1; 
		}
		if( line43 == 1 &&  mx>=450 && mx<=730 && my>=530 && my<=730 ){ // 2 no box
			line433 = 1;
		}
		// Parrot
		if(  mx>=910 && mx<=965 && my>=645 && my<=700 ){
			line44 = 1; 
		}
		if( line44 == 1 &&  mx>=454 && mx<=730 && my>=415 && my<=515 ){ // 3 no box
			line444 = 1;
		}
		// Penguin
		if(  mx>=910 && mx<=965 && my>=380 && my<=440 ){
			line45 = 1; 
		}
		if( line45 == 1 &&  mx>=454 && mx<=730 && my>=650 && my<=750 ){ // 1 no box
			line455 = 1;
		}
		// Owl
		if(  mx>=910 && mx<=965 && my>=120 && my<=170 ){
			line46 = 1; 
		}
		if( line45 == 1 &&  mx>=454 && mx<=730 && my>=180 && my<=280 ){ // 5 no box
			line466 = 1;
		}
		if( mx >= 845 && mx <= 885 && my >=48 && my<= 62 ){
			scene = 5;
		}
		if( mx >= 295 && mx <= 370 && my >=48 && my<= 62 ){
			scene = 3;
		}
	}	
	// Colors slide
	else if ( scene == 5) {
		// violet
		if(  mx>=220 && mx<=270 && my>=640 && my<=700 ){
			line51 = 1; 
		}
		if( line51 == 1 &&  mx>=450 && mx<=730 && my>=530 && my<=730 ){ // 2no
			line511 = 1;
		}
		// Green
		if(  mx>=220 && mx<=270 && my>=380 && my<=440 ){
			line52 = 1; 
		}
		if( line52 == 1 &&  mx>=450 && mx<=730 && my>=300 && my<=400 ){ // 4no
			line522 = 1;
		}
		//  Red
		if( mx>=220 && mx<=270 && my>=110 && my<=165 ){
			line53 = 1; 
		}
		if( line53 == 1 &&  mx>=450 && mx<=730 && my>=60 && my<=160 ){ // 6 no 
			line533 = 1;
		}
		// Blue
		if(  mx>=910 && mx<=965 && my>=645 && my<=700 ){
			line54 = 1; 
		}
		if( line54 == 1 &&   mx>=454 && mx<=730 && my>=180 && my<=280 ){ // 5 no box
			line544 = 1;
		}
		// Orange
		if( mx>=910 && mx<=965 && my>=380 && my<=440  ){
			line55 = 1; 
		}
		if( line55 == 1 &&  mx>=454 && mx<=730 && my>=650 && my<=750 ){ // 1 no box
			line555 = 1;
		}
		// Yellow
		if(   mx>=910 && mx<=965 && my>=120 && my<=170  ){
			line56 = 1; 
		}
		if( line56 == 1 &&  mx>=454 && mx<=730 && my>=415 && my<=515 ){ // 3 no box
			line566 = 1;
		}
		if( mx >= 845 && mx <= 885 && my >=48 && my<= 62 ){
			scene = 6;
		}
		if( mx >= 295 && mx <= 370 && my >=48 && my<= 62 ){
			scene = 4;
		}
	 }
	//  Fruits slide
	 else if( scene == 6 ){
		// Mango        
		if(  mx>=220 && mx<=270 && my>=640 && my<=700 ){
			line61 = 1; 
		}
		if( line61 == 1 &&  mx>=450 && mx<=730 && my>=60 && my<=160 ){ // 6 no box
			line611 = 1;
		}
	
		// Guava
		if(   mx>=220 && mx<=270 && my>=380 && my<=440 ){
			line62 = 1; 
		}
		if( line62 == 1 &&  mx>=454 && mx<=730 && my>=415 && my<=515  ){ // 3 no box
			line622 = 1;
		}
		// Strawberry
		if( mx>=220 && mx<=270 && my>=110 && my<=165  ){
			line63 = 1; 
		}
		if( line63 == 1 && mx>=454 && mx<=730 && my>=650 && my<=750 ){ // 1 no box
			line633 = 1;
		}
	 
		//  Pineapple
		if( mx>=910 && mx<=965 && my>=645 && my<=700 ){
			line64 = 1; 
		}
		if( line64 == 1 &&  mx>=454 && mx<=730 && my>=180 && my<=280  ){ // 5 no box
			line644 = 1;
		}
		// Lemon
		if(  mx>=910 && mx<=965 && my>=380 && my<=440 ){
			line65 = 1; 
		}
		if( line65 == 1 &&  mx>=450 && mx<=730 && my>=530 && my<=730 ){ // 2 no box
			line655 = 1;
		}
		// Apple
		if(   mx>=910 && mx<=965 && my>=120 && my<=170 ){
			line66 = 1; 
		}
		if( line66 == 1 &&  mx>=450 && mx<=730 && my>=300 && my<=400 ){ // 4 no box
			line666 = 1;
		}
		if( mx >= 845 && mx <= 885 && my >=48 && my<= 62 ){
			scene = 7;
		}
		if( mx >= 295 && mx <= 370 && my >=48 && my<= 62 ){
			scene = 5;
		}
	}
	else if( scene == 7 ){
		if( mx >= 590 && mx <= 630 && my >=195 && my<= 215 ){
			exit(0);
		}
	}
}
/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	if( scene > 0 && scene<=7 && key == 'w' ){
		scene--;
	}
	else if( scene>=0 && scene<7 && key == 'e' ){
		scene++;
	}
	
	// else if(scene ==0 &&  key == '13'){
	// 	scene = 1;
	// }
	//place your codes for other keys here
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

	//place your codes for other keys here
}
// void change(){
// 	xl1 = xl1 + 10;
// 	xl2 = xl2 + 10;
// 	yl1 = yl1 + 10;
// 	yl2 = yl2 + 10;
	
// }

int main() {
	//place your own initialization codes here.
	//change();
	iInitialize(1200, 800, "WORD MATCHING");
	return 0;
}