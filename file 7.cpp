#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Surya chawla\n");
printf("\nEnter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);
if(a>b && a>c)
printf("\n\t%d is the largest number",a);
if(b>a && b>c)
printf("\n\t%d is the largest number",b);
if(c>a && c>b)
printf("\n\t%d is the largest number",c);
return 0;
}

