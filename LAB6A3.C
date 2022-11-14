#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int i;



void reading(int *arr,int count)
{
	
	
	for(i=0;i<5;i++)
	{
		printf("Enter element %d of array %d : \n",i+1,count);
		gets(arr);
	}
}

void printing_plus_swaping(int *arr1,int *arr2)
{
	char temp;
	
	int count=1;
	
	char *temp = arr1;
	arr1 = arr2;
	arr2 = temp;
	
	//for(i=0;i<5;i++){
		printf("Elements of array %d :\n",count);
		puts(&arr1);
	//}
	count++;
	//for(i=0;i<5;i++){
		printf("Elements of array %d :\n",count);
		puts(&arr2);
	//}
	getch();
	exit(1);
	
}
void main(void)
{
	char arr1[5];
	char arr2[5];
	int count=1;
	
	reading(&arr1,count);
	count++;
	reading(&arr2,count);
	printing_plus_swaping(&arr1,&arr2);
	
	
}