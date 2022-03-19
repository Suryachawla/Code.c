
#include<stdio.h>
#include<conio.h>
int main()
{
long int bs,da,r,gs;
printf("surya chawla\n");
printf("\nEnter Ramesh's basic salary:");
scanf("%ld",&bs);
da=bs*40/100;
r=bs*20/100;
printf("\tDearness allowance=%d",da);
printf("\n\tHouse rent=%d",r);
gs=bs+da+r;
printf("\n\tGross salary=%d",gs);
return 0;
}

