#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


struct employee
{
char code[10];
char fname[50];
char sname[50];
char salary[10];
};

void main()
{
int i=0;
int size;
struct employee obj;
clrscr();
printf("Enter employee's code : ") ;
scanf("%s",&obj.code);

printf("Enter employee's first name : ");
scanf("%s",obj.fname);
for(i=0;i<strlen(obj.fname);i++)
{
if(obj.fname[i]!>'a'&&obj.fname!<'Z')
{
printf("INVALIDDD!!!!!!");
getch();
break;
}
printf("eNTER SECOND NAME OF EMPLOYEE : ");
scanf("%s",obj.sname);
if(isalpha(obj.sname[i]!=1))
{
printf("invalid!!!!");
getch();
}

else
{
printf("Enter employee's salary : ");
scanf("%s",&obj.salary);
printf("%s\n",obj.code);
printf("%s\n",obj.fname);
printf("%s\n",obj.sname);
printf("%s\n",obj.salary);
getch();
break;
}


}


}