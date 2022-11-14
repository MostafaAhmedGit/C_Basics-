#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <alloc.h>

typedef struct
{
	int id;
	int salary;
}Employee;

void main (void)
{
	int input=0;
	int i=0;
	Employee *PTRtoEmployee=NULL;
	
	clrscr();
	printf("Enter Number of Empolyees \n");
	scanf("%d",&input);
	
	PTRtoEmployee=(Employee *)malloc(input * sizeof(Employee));
	for(i=0; PTRtoEmployee!=NULL&&i<input;i++)
	{
		printf("Enter id of Empolyee %d \n",i+1);
		scanf("%d",&PTRtoEmployee[i].id);
		printf("Enter salary of Empolyee %d \n",i+1);
		scanf("%d",&PTRtoEmployee[i].salary);
	}
	for(i=0; PTRtoEmployee!=NULL&&i<input;i++)
		printf("id of Empolyee %d is %d and his salary is %d \n",i+1,PTRtoEmployee[i].id
		,PTRtoEmployee[i].salary);
	
	getch();
}