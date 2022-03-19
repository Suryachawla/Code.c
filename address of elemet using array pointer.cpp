#include<stdio.h>
int main()
{
	int ar[]={5,6,7};
	char arr[]={5,6,7};
	int*ptr=ar;
	printf("Surya chawla\n");
	printf("address of a %d\n",&ar[0]);
	printf("address of a1 %d\n",&ar[1]);
	printf("address of a2 %d\n",&ar[2]);
	printf("\n");
	printf("address of b %d\n",&arr[0]);
	printf("address of b1 %d\n",&arr[1]);
	printf("address of b2 %d\n",&arr[2]);
	return 0;
}
