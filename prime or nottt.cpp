#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("Surya chawla\n");
printf("\nEnter any number");
scanf("%d",&n);
i=2;
while(i<=n-1)
{
if(n%i==0)
{
printf("The given number is not a prime number");
break;
}
i++;
}
if(i==n)
printf("The given number is a prime number");
return 0;
}

