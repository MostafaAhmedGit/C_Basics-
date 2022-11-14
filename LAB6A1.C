#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>



void swap(char *A,char *B)
{
	int temp;
	temp = A;
	A=B;
	B=temp;
	
}
void main(void)
{
	char x,y;
	int count=0,count2=0;
	int len,i;
	
	printf("Enter a number :\n");
	gets(x);
	
	
	for(i=0;i<strlen(x);i++)
	{
	if(x>='0'&&x<='9')
	{
		count++;
	}
	}
	
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
	
}