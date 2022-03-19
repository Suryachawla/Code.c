#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Surya chawla\n");
	printf("enter the first number\n");
	scanf("%d",&x);
	printf("enter the second number\n");
	scanf("%d",&y);
	printf("enter the third number\n");
	scanf("%d",&z);
	
if (x>=y && x>=z)
{printf("%d is largest number of all",x);
}
else if(y>=x && y>=z)
{printf("%d is largest number of all",y);
}
else
{printf("%d is largest number of all",z);
}
return 0;
}
