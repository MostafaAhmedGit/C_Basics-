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


void main(void)
{
	int i;
	struct employee obj;
	int len;
	
	printf("Enter Employee's Code : ");
	scanf("%s",obj.code);
	
	len = strlen(obj.code);
	
	for(i=0;i<len;i++)
		if(obj.code[i]>='0'||obj.code[i]<='9')
			printf("GOOD");
	
	
}