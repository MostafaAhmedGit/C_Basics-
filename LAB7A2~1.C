#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <alloc.h>

void main (void)
{
	int string_num=0;
	int string_size=0;
	int counter=0;
	int i=0;
	char **PTRtoString=NULL;

	clrscr();

	printf("Enter Number of Strings \n");
	scanf("%d",&string_num);

	PTRtoString=(char **)malloc(string_num * sizeof(char *));

	for(counter=0; PTRtoString!=NULL&&counter<string_num;counter++)
	{
		printf("Enter String %d Size \n",counter+1);
		scanf("%d",&string_size);
		PTRtoString[counter]=(char *)malloc(string_size * sizeof(char));
		printf("Enter Name %d \n",counter+1);
		flushall();
		i=0;
		while(i <(string_size-1))
		{
			 scanf("%c",&PTRtoString[counter][i]);
			 if(PTRtoString[counter][i]=='\0')
				break;
			i++;
		}
		PTRtoString[counter][i]='\0';
		flushall();
	}

	for(counter=0; PTRtoString!=NULL&&counter<string_num;counter++)
		printf("Name %d is %s \n",counter+1,PTRtoString[counter]);

	getch();

}