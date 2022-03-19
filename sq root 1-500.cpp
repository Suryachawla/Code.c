#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,root;
	printf("Surya chawla\n");
	printf("enter the number\n");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		root=sqrt(b);
		root=root*root;
		if(b==root)
		{
				printf("\n b=%d",b);
		}
	}
return 0;
}
