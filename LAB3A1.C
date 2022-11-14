#include <stdio.h>
#include <conio.h>

void main(void)
{
 int arr[3];
 int i;
 for(i=0;i<3;i++)
 {
 printf("PLEASE ENTER THE %d VARIABLE\n ",i+1);
 scanf("%d",&arr[i]);
 }

 for(i=0;i<3;i++)
 {
 printf("the variable num %d is : %d\n",i+1,arr[i]);
 }
 getch();


}