#include<stdio.h>
#include<conio.h>
#define SIZE	3

struct Employee
{
char code[10];
char name[10];

}obj[SIZE];


int i;


int sqsrch_chars(int *ptr_to_struct,int *ptr_to_srch_item)
{
	int flag;
	for(i=0;i<SIZE;i++)
	{
		flag = strcmp(obj[i].code,ptr_to_srch_item);
		if(flag==0)
			return i+1;
		else 
			return -1;
			
	}
}

void main(void)
{	

	int j;
	
	char code_srch[10];

	clrscr();

	for(i=0;i<SIZE;i++)
	{
		printf("Enter code of Employee %d :\n",i+1);
		gets(obj[i].code);

		printf("Enter name of Employee %d :\n",i+1);
		gets(obj[i].name);
	}
	
	printf("Enter a code you want to srch for : ");
	gets(code_srch);
	
	
	i = sqsrch_chars(&obj,&code_srch);
	if(i==-1)
		printf("Invalid");
	else 
	printf("%d",i);

	getch();
	

}