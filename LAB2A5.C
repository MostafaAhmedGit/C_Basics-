#include<stdio.h>
#include<conio.h>

void main(void)
{
int x,j,i;
printf("eNTER A NUM\n ");
scanf("%d",&x);

for(i=x;i>=1;i--)
{
printf("\nsssssssssssssss\n");
printf("TABLE %d \n",i);
for(j=1;j<13;j++)
{
printf("%d\n",i*j);
}
printf("\n**************\n");
getch();
}
getch();
}