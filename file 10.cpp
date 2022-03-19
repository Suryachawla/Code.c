#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("surya chawla\n");
printf("\nEnter any two numbers:");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("The interchanged values are: %d %d",a,b);
return 0;
}

