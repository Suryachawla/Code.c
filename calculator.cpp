#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c,ch;
	printf("Surya chawla\n");
	printf("enter the first number:\n");
	scanf("%d",&a);
	printf("enter the second number:\n");
	scanf("%d",&a);
	printf("Arithemetic functions:\n");
	printf("additions\n");
	printf("subraction\n");
	printf("multipication\n");
	printf("modules\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
		switch(ch)
	{	
		case 1:
			c+a+b;
			printf("%d",c);
			break;
		case 2:
			c=a-b;
			printf("%d",c);
			break;
		case 3:
			c=a*b;
			printf("%d",c);
			break;
		case 4:
			c=a/b;
			printf("%d",c);
			break;
		case 5:
			c=a%b;
			printf("%d",c);
			break;
		default:
			printf("wrong output");
return 0;
			}
	
}
