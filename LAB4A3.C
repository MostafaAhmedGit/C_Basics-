#include <conio.h>
#include <stdio.h>

struct employee
{
char name[10];
char code[10];
char salary[10];
};

void main(void)
{
struct employee obj[5];
int i,j;
clrscr();
for(i=0;i<5;i++)
{
printf("Enter Employee %d's Name : ",i+1);
scanf("%s",obj[i].name);
printf("Enter EMPLOYEE %d's SALARY : ",i+1);
scanf("%s",obj[i].salary);
printf("Enter EMPLOYEE %d's Code : ",i+1);
scanf("%s",obj[i].code);
}
for(i=0;i<5;i++)
{
printf("EMPLOYEE %d's NAME : %s\n",i+1,obj[i].name);
printf("EMPLOYEE %d's salary : %s\n",i+1,obj[i].salary);

printf("EMPLOYEE %d's code : %s\n",i+1,obj[i].code);

}
getch();
}