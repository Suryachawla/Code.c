#include<stdio.h>
#include<conio.h>
int main()
{
	int x=12;
	int y=1;
	printf("Surya chawla\n");
	printf("value of x:%d\n",x);
	printf("value of y:%d\n",y);
	y=x++;
	printf("after post increment value of x:%d",x);
	printf("y=%d\n\n",y);
	y=--x;
	printf("after pre increment value of x:%d\n",x);
	printf("y=%d\n\n",y);
	y=++x;
	printf("after pre decrement value of x:%d\n",x);
	printf("y=%d\n\n",y);
	y=x--;
	printf("after post decrement value of x:%d\n",x);
	printf("y=%d\n\n",y);

return 0;
}

