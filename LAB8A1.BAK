#include<stdio.h>
#include<conio.h>
#define SIZE	5

int i;


int sqsrch(int *ptr_to_arr,int array_count,int num)
{


	for(i=0;i<array_count;i++)
	{
		if(ptr_to_arr[i]==num)
			return i;
	}
	return -1;
}
void main(void)
{
	int arr[SIZE];
	int chosen_num;
	int flag;
	clrscr();

	printf("Enter an array of 5 elements :\n");

	for(i=0;i<SIZE;i++)
	{
		printf("Element %d :",i+1);
		scanf("%d",&arr[i]);
	}

	printf("Choose a number to perform linear search : ");
	scanf("%d",&chosen_num);

	flag = sqsrch(&arr,SIZE,chosen_num);

	if(flag==-1) {
		printf("Not found ! ");
	       getch();	}
	else
		  {
		printf("Found in index : %d ",flag+1);
		getch();
	        }
	
	
}