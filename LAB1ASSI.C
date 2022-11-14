#include<stdio.h>
#include<conio.h>
void main(void)
{
int x = 10;
float y = 2.0;
char a = 'a';
char z;

printf("Integer : %d \n Float : %f \nCharacter : %c\n",x,y,a);
printf("HEX : %x    \nOcta : %o   \n",y,x);
scanf("%c",&z);
printf("Char entered is %c\n",z);
printf("ASCII of char scanned is %d",z);
getch();
}