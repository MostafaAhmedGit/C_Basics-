#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int i;



void reading(int *arr)
{
	
	
	for(i=0;i<5;i++)
	{
		printf("Enter element %d : \n",i+1);
		scanf("%d",&arr[i]);
	}
}

void printing(int *arr)
{
	for(i=0;i<5;i++)
		printf("Element %d : %d\n",i+1,arr[i]);
	getch();
	
}
void main(void)
{
	int arr[5];
	
	reading(&arr);
	printing(&arr);
	
}