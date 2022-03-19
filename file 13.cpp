#include<stdio.h>
#include<conio.h>
int main()
{
double bs,hr,da,gs;
printf("surya chawla\n");
printf("\nEnter the basic salary of the employee:");
scanf("%lf",&bs);
if(bs<1500)
{ hr=bs*0.10;
da=bs*0.90;
gs=bs+hr+da;
printf("Gross salary of the employee:%lf",gs);}
else
{hr=500;
da=bs*0.98;
gs=bs+hr+da;
printf("Gross salary of the employee:%lf",gs);
}
return 0;
}

