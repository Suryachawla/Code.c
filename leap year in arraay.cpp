#include<stdio.h>
int main()
{
	int i,size;
	printf("Surya chawla\n");
	printf(" enter length of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter the years\n");
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<size;i++)
	{
		if((arr[i]%4==0) && (arr[i]%100!=0))
		printf("\n %d is leap year",arr[i]);
		else if (arr[i]%400==0)
		printf("\n %d is leap year",arr[i]);
		else
		printf("\n %d is not a leap year",arr[i]);
	}
return 0;
}
