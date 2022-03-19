#include<stdio.h>
#include<conio.h>
int main()
{
long int n,ld,nd,sum;
printf("Surya chawla\n");
printf("\nEnter a five digit number:");
scanf("%ld",&n);
ld=n%10;
sum=ld;
nd=(n/10)%10;
sum=sum+nd;
nd=(n/100)%10;
sum=sum+nd;
nd=(n/1000)%10;
sum=sum+nd;
nd=(n/10000)%10;
sum=sum+nd;
printf("Sum of all the five digits:%ld",sum);
return 0;
}

