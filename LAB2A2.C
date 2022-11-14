#include <stdio.h>
#include <conio.h>

void main(void)
{
int sum=0;
int y;

while(sum<=100)
{
printf("\n");
printf("Enter a num : ");
scanf("%d",&y);
sum+=y;

if(sum>100)
{
sum-=y;
break;


}
printf("%d",sum);
}
printf("total is : %d ",sum);
}