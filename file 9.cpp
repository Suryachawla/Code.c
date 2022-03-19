#include<stdio.h>
#include<conio.h>
int main()
{
int c,d;
printf("Surya chawla\n");
printf("\nEnter the two numbers:");
scanf("%d %d", &c,&d);
c=c+d;
d=c-d;
c=c-d;
printf("The interchanged values of c and d are:%d %d",c,d);
return 0;
}

