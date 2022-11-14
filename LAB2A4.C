#include <stdio.h>
#include <conio.h>

void main(void)
{
int i,j,x;
scanf("%d",&x);
for(i=1;i<=x;i++)
{
printf("\nssssssssssssssssssssssssss");
printf("TABLE %d\n",i);

for(j=1;j<13;j++)
printf("%d\n",i*j);

printf("\n*************************\n");
getch();
}
getch();
}