#include<stdio.h>
int main()
{
	int i,size;
	printf("Surya chawla\n");
	printf("entr array length:\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter the array element \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Array elements with their address::\n");
	for (i=0;i<size;i++)
	{
		printf("value of arr[%d]=%d\t",i,arr[i]);
		printf("address of arr[%d]=%p\n",i,&arr[i]);
	}
return 0;
}
