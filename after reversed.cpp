#include<stdio.h>
int main()
{
	printf("Surya chawla\n");
	int a,b,r,sum=0;
	printf("enter a number \n");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		r=a%10;
		sum=sum*10+r;
		a/=10;
	}
		printf("after reversed=%d",sum);
		return 0;
}
