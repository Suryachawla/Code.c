#include<stdio.h>
#include<conio.h>
int main()
{
float km,m,cm,i,f;
printf("Surya chawla\n");
printf("\n\tEnter the distance in kilometres=");
scanf("%f",&km);
m=1000*km;
cm=m*100;
i=cm/2.54;
f=i/12;
printf("\n\t\tDistance in metres=%f",m);
printf("\n\t\tDistance in centimetres=%f",cm);
printf("\n\t\tDistance in inches=%f",i);
printf("\n\t\tDistance in feets=%f",f);
return 0;
}

