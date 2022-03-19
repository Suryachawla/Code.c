#include<stdio.h>
int s;
int sum(int a,int b)
{
	s=a+b;
	return s;
}
int main()
{
	extern int s;
	int a,b;
	printf("Surya chawla\n");
	printf("\n enter value of a");
	scanf("%d",&a);
	printf("\n enter value of b");
	scanf("%d",&b);
	s=sum(a,b);
	printf("sum of a & b:%d",s);
	return 0;
}
