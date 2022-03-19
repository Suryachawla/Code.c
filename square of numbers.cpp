#include<stdio.h>
int main()
{
	printf("Surya chawla\n");
	int a=0;
	void sqr(int);
	for(a=1;a<=5;a++)
	sqr(a);
return 0;
}
void sqr(int b)
{
	printf("sqaure of number%d\n",b*b);
}
