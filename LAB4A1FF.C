#include<stdio.h>
#include<conio.h>

#define UP		0x48
#define down    	0x50
#define home    	0x85 //HOME
#define end		0x86 //BACK SPACE

#define enter    	0xD
#define ESC		0x1B
#define norm_at         0x07
#define highlig	        0x70

#define NEW	 	 0
#define Display          1
#define exit	         2
#define NULL     	 0

void main(void)
{
char ch,ch1;
char Menu[3][10] = {"NEW","DISPLAY","EXIT"};
int i,j;
int term=0,pos=0;
int col=25,row=10;


do
{
flushall();
clrscr();
for(i=0;i<3;i++)
{
		if(i==pos)
		textattr(highlig);
		gotoxy(col,row+2*i);
		cprintf("%s",Menu[i]);
		textattr(norm_at);
       
}
ch = getch();
switch(ch)
{
case NULL:
{
	ch = getch();
	switch(ch)
	{
	case UP:
		pos--;
		if(pos<0)
		pos=2;
		break;

	case down:
		pos++;
		if(pos>2)
		pos=0;
		break;
/*
	case home:
		pos=0;
		break;
	case end:
		pos=2;
		break;
*/
	}
}break;
case enter:
{
	switch(pos)
	{
		case NEW:
			clrscr();
			printf("You chose New");
			getch();
			break;
		case Display:
			clrscr();
			printf("You chose Display");
			getch();
			break;
		case exit:
			term=1;
			break;
	}
}break;

case ESC:
	term=1;
	break;
}

}while(!term);
}
