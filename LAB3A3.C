#include<stdio.h>
#include<conio.h>

void main(void)
{
int sum=0;
int avg=0;
int arr[3][4];
int i,j;
 clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("Enter element %d,%d :\n ",i,j);
scanf("%d\n",&arr[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
sum+=arr[i][j];
}
printf("SUM OF ROW NUM %d:  %d\n",i+1,sum);

sum = 0;
}

for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
sum+=arr[j][i];
}
printf("AVG OF COLOUM NUM %d: %d\n",i,sum/3);
sum=0;
}
getch();
}