#include<stdio.h>
#include<conio.h>


long int poww(int i,int y)
{

 if(y!=0)
	return (i * poww(i, y - 1));

else
	return 1;
}
void main(void)
{
	int x,y;

	clrscr();
	printf("Enter base : \n");
	scanf("%d",&x);

	printf("Enter power : \n");
	scanf("%d",&y);

	printf("RESULT OF THE POWER :  %d",poww(x,y));
	getch();

}