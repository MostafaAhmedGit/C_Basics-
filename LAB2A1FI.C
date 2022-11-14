#include <stdio.h>
#include <conio.h>

void main()
{

int input,x=1,s,col;
int row = 1;

clrscr();
printf("ENTER AN ODD NUMBER : \n");
scanf("%d",&input);
if(input%2!=0){
s = input*input;
col = (input+1)/2;
gotoxy(col*3,row*3);
printf("1");

while(x<s)
{
if(x%input==0)
{
row++;
}
else
{
col--;
row--;
}
if(col<=0)
col=input;
if(row<=0)
row=input;

gotoxy(col*3,row*3);
x++;
printf("%d",x);

}
}
else
printf("INVALID INPUT !!!");
getch();
}