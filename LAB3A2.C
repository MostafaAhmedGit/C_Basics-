#include <stdio.h>
#include <conio.h>

void main(void)
{
int i,max,v,min;
int arr[4] = {2,3,4,12};

for(i=1;i<4;i++)
{
max = arr[0];
min = arr[0];
if(max<arr[i])
{max = arr[i];}
if(min>arr[i])
min = arr[i];

}

clrscr();
printf("MAXIMUM : %d\nMINIMUM : %d ",max,min);
getch();
}