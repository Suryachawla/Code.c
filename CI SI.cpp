#include<stdio.h>
#include<math.h>
int main()
{
	printf("Surya chawla\n");
	float principal,rate,time,si,ci,r;
	printf("enter the principal ammount\n");
	scanf("%f",&principal);
	printf("enter the rate of interest\n");
	scanf("%f",&rate);
	printf("enter the peroid of time\n");
	scanf("%f",&time);
	si=principal*(rate/100)*time;
	printf("simple interest=%f\n",si);
	ci=principal*pow(1+rate/100,time)-principal;
	printf("compound interest=%f\n",ci);
	return 0;

}
