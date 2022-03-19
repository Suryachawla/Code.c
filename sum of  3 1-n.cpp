#include<stdio.h>
int main()
{
	printf("Surya chawla\n");
	int a=1,num,sum=0;
	printf("enter the value of number\n");
	scanf("%d",&num);
	printf("\n");
	do
	{
		printf("%d, sqaure=%d\n",a,a*a);
		sum+=a;
		a++;
	}
	while (a<num);
	printf("sum of digits =%d",sum);
return 0;
}
