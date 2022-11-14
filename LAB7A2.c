#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <alloc.h>

void main (void)
{
	int 		Local_u16StringNumber=0;
	int 		Local_u16StringSize=0;
	int 		Local_u16Counter=0;
	int 		Local_u16SubCounter=0;
	char 		**PTRtoString=NULL;
	system("cls");

	printf("Enter Number of Strings \n");
	scanf("%d",&Local_u16StringNumber);

	PTRtoString=(char **)malloc(Local_u16StringNumber * sizeof(char *));

	for(Local_u16Counter=0; PTRtoString!=NULL&&Local_u16Counter<Local_u16StringNumber;Local_u16Counter++)
	{
		printf("Enter String %d Size \n",Local_u16Counter+1);
		scanf("%d",&Local_u16StringSize);
		PTRtoString[Local_u16Counter]=(char *)malloc(Local_u16StringSize * sizeof(char));
		printf("Enter Name %d \n",Local_u16Counter+1);
		flushall();
		Local_u16SubCounter=0;
		while(Local_u16SubCounter <(Local_u16StringSize-1))
		{
			 scanf("%c",&PTRtoString[Local_u16Counter][Local_u16SubCounter]);
			 if(PTRtoString[Local_u16Counter][Local_u16SubCounter]=='\0')
				break;
			Local_u16SubCounter++;
		}
		PTRtoString[Local_u16Counter][Local_u16SubCounter]='\0';
		flushall();
	}

	for(Local_u16Counter=0; PTRtoString!=NULL&&Local_u16Counter<Local_u16StringNumber;Local_u16Counter++)
		printf("Name %d is %s \n",Local_u16Counter+1,PTRtoString[Local_u16Counter]);

	getch();

}