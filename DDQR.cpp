#include<stdio.h>
int main()
{
	int dividend,divisor,qoutient,remainder;
	printf("Surya chawla\n");
	printf("enter dividend\n");
	scanf("%d",&dividend);
	printf("enter divisor\n");
	scanf("%d",&divisor);
	
	qoutient=dividend/divisor;
	
	remainder=dividend % divisor;
	
	printf("qoutient=%d\n",qoutient);
	printf("remainder=%d\n",remainder);
	return 0;
}
