#include <stdio.h>
#include <conio.h>

void main(void)
{
 int choice;
 printf("choose one of the following \n1.apple\n2.pear\n3.mango\n");
 scanf("%d",&choice);

 if(choice==1)
 printf("NICE YOU CHOSE AN APPLE\n");
 else if(choice==2)
 printf("yOU CHOSE A PEAR");
 else if(choice==3)
 printf("yOU CHOSE A MANGO");
 else
 printf("INVALID");
 getch();
}