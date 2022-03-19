#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n;
	printf("Surya chawla\n");
	printf("enter the number\n");
	scanf("%d",&num);
	printf("number:\n");
	for (n=1;n<=num;n++)
	printf("%d\n",n);
	printf("square");
	for(n=1;n<=num;n++)
	{
		printf("\n%d",n*n);
	}
return 0;
}
