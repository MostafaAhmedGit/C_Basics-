#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void Read_Employee(void);
void Print_Employee(void);


char fname[10];
char sname[10];
char salary[10];


void main(void)
{   clrscr();
    Read_Employee();
   // Print_Employee();
    getch();
}

void Read_Employee(void)
{
	int i=0,count=0,count2=0,c1flag=0,c2flag=0;
int c3flag=0;
int count3=0;
	printf("Enter Employee first name :\n ");
	gets(fname);

	for(i=0;i<strlen(fname);i++)
	{
	if((fname[i]>='A'&&fname[i]<='Z')||(fname[i]>='a'&&fname[i]<='z'))
	{
		count++;


	}
	}
			if(count==strlen(fname))
				c1flag=1;
			else if(c1flag==0)
		       {
				printf("INVALIDD!!!");
				getch();
				printf("walahi INVALIDD!!!");
				exit(1);
		       }
	printf("Enter Employee second name :\n ");
	gets(sname);
	for(i=0;i<strlen(sname);i++)
	{
	if((fname[i]>='A'&&fname[i]<='Z')||(fname[i]>='a'&&fname[i]<='z'))
	{
		count2++;

	}
	}
		if(count2==strlen(sname))
		c2flag=1;
		else if(c2flag==0)
		{
		printf("INVALIDD!!!");
		getch();
		printf("walahi INVALIDD!!!");
		exit(1);
		   }
	if(c1flag==1&&c2flag==1)
	printf("%s %s\n",fname,sname);

printf("Enter Employee's salary :\n ");
gets(salary);

	for(i=0;i<strlen(salary);i++)
	{
	if((salary[i]>='0'&&salary[i]<='9'))
	{
		count3++;

	}
	}
		if(count3==strlen(salary))
		{c3flag=1;
		printf("%s",salary);
		}else if(c3flag==0){
		printf("INVALIDD!!!");
		getch();
		printf("walahi INVALIDD!!!");
		exit(1);
		}


 } 