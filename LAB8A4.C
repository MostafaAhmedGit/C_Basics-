#include<stdio.h>
#include<conio.h>
#define SIZE	30
#include <string.h>

void main(void)
{
int i, low, high, mid, n
char array[5][5]={"ahm","bob","xyz"};
char val[5];

printf("Enter value to find ");
gets(val);
low = 0;
high = strlen(val);
mid = (low+high)/2;

while (low <= high)
{
if(strcmp(array[mid],val)<0)
low = mid + 1;
else if (strcmp(array[mid],val)==0) {
printf(" found at location %d", mid+1);
	getch();
break;
}
	else
		high = mid - 1;
		mid = (low + high)/2;
}
	if(low > high)
		printf("Not found! isn't present in the list");
	getch();
}
