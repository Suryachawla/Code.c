#include<stdio.h>
int main()
{
	int arr1[25],i,n;
	printf("Surya chawla\n");
	printf("\n\n Pointer: store and print element from array:\n");
	printf("input the number of element store in array :\n");
	scanf("%d",&n);
	
	printf("input %d number of element in array:\n");
	for (i=0;i<n;i++)
	{
		printf("element -%d:",i);
		scanf("%d",arr1+i);
	}
	printf("the element you are entered are \n");
	for(i=0;i<n;i++)
	{
		printf("element-%d:%d\n",i,*(arr1+1));
	}
return 0;
}
