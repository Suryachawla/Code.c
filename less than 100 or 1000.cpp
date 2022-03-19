#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Surya chawla\n");
	printf("enter a number\n");
	scanf("%d",&num);
	if(num>=100&&num<=1000)
		printf("%d is greater than 100 and less than 1000",num);
	else 
		printf("%d is less than 100",num);
	
return 0;
}
