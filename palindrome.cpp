#include<stdio.h>
int main()
{
	printf("Surya chawla\n");
	int n,reversed=0, remainder ,original;
	printf("enter an interger");
	scanf("%d",&n);
	original=n;
	while(n!=0)
	{
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	if(original==reversed)
	printf("%d is a palindrome",original);
	else
	printf("%d is not palindrome",original);
return 0;
}
