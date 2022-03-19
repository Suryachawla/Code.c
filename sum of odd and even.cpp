#include<stdio.h>
int main()
{
	int size,i,a[10];
	int even_sum=0,odd_sum=0;
	printf("Surya chawla\n");
	printf("\n enter the size of array :\n");
	scanf("%d",&size);
	printf("\n enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			even_sum=even_sum+a[i];
		}
		else
		{
		odd_sum=odd_sum+a[i];
		}
	}
printf("\n the sum of even number is this array =%d",even_sum);
printf("\n the sum of odd number is this array=%d",odd_sum);
return 0;

}
