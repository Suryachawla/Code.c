#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("surya chawla\n");
	printf("enter value:\n");
	scanf("%d",&a);
	
	if(a%2==0)
	goto even;
	else
	goto odd;
	even:
	printf("number is even\n");
	
	odd:
	printf("number is odd\n");
return 0;
}
