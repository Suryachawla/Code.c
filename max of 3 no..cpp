#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,t,max;
	printf("Surya chawla\n");
	printf("enter the number\n");
	scanf("%d %d %d",&a,&b,&c);
	t=a>b? a:b;
	max=t>c? t:c;
	printf("max value is %d\n",max);
	return 0;
}
