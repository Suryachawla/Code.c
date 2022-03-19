#include<stdio.h>
#include<conio.h>
int main()
{
long int n,r1,r2,r3,r4,rev;
printf("surya chawla\n");
printf("Enter a five digit number:");
scanf("%ld",&n);
r1=n%10;
n=n/10;
r2=n%10;
n=n/10;
r3=n%10;
n=n/10;
r4=n%10;
n=n/10;
rev=r1*10000+r2*1000+r3*100+r4*10+n;
printf("The reversed number is:%ld",rev);
return 0;
}

