#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>



void swap(int *x,int  *y)
{
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;

}
void main(void)
{
	int x,y;
	//int count=0,count2=0;
	//int len,i;
	clrscr();
	printf("Enter a value for X :\n");
	scanf("%d",&x);

	printf("\nEnter a value for Y:\n");
	scanf("%d",&y);

	swap(&x,&y);
	printf("value of x : %d\nvalue of y : %d",x,y);
	getch();
	
	/*
	for(i=0;i<strlen(x);i++)
	{
	if(x>='0'&&x<='9')
	{
		count++;
	}
	}
	
	*/
	/*
	if(count==strlen(x))
	{
		printf("Enter another number : \n");
		gets(y);
			for(i=0;i<strlen(y);i++)
				if(y>='0'&&y<='9')
					count2++;
		//swap(*x,*y);
	}
	else
	{
		printf("Invalid !");
		exit(1);
	}
	*/
	
}