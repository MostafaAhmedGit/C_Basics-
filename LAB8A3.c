#include<stdio.h>
#include<conio.h>
#define SIZE	30



void main(void)
{
int i, low, high, mid, n, key, array[SIZE];
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter %d integers", n);
	for(i = 0; i < n; i++)
		scanf("%d",&array[i]);
printf("Enter value to find ");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high)
{
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d", key, mid+1);
	getch();
break;
}
	else
		high = mid - 1;
		mid = (low + high)/2;
}
	if(low > high)
		printf("Not found! %d isn't present in the list", key);
	getch();
return 0;
}
