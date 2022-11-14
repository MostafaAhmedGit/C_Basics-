#include <stdio.h>
#include <stdlib.h>

void Read_Employee(void);
void Print_Employee(void);


char name[10];
char salary[10];


void main(void)
{   clrscr();
    Read_Employee();
    Print_Employee();
    getch();
}

void Read_Employee(void)
{
	int len,count=0;
	printf("Enter Employee's name :\n ");
	scanf("%s",&name);

	printf("Enter Employee's salary :\n ");
	scanf("%s",&salary);
	
	while(name[i]!='\0')
	{
		if(name[i]=='A')
		{
			count++
		}
		i++;
		
	}
	printf("%d",count);
	

}
void Print_Employee(void)
{
	printf("Employee's name :\n %s \n",name);
	printf("Enter Employee's salary :\n %s \n",salary);
}