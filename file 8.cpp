#include<stdio.h>
#include<conio.h>
int main()
{
int q;
double tp,dp,p;
printf("surya chawla\n");
printf("\nEnter the quantity of the item purchased:");
scanf("%d",&q);
printf("Enter the price of one item:");
scanf("%lf",&p);
tp=p*q;
if(q>1000){
dp=tp-(tp*0.10);
printf("\n\t\tDiscounted price=%lf",dp);  }
else
printf("\n\t\tTotal amount=%lf",tp);
return 0;
}

