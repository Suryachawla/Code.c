#include<stdio.h>
#include<conio.h>
int main(){
float l,b,r,p,a,c,ca;
printf("Surya chawla\n");
printf("\nEnter the length of the rectangle:");
scanf("%f",&l);
printf("Enter the breadth of the rectangle:");
scanf("%f",&b);
printf("Enter the radius of the circle:");
scanf("%f",&r);
p=(l+b)*2;
a=l*b;
printf(" \nPerimeter=%f",p);
printf(" \nArea of rectangle=%f",a);
c=2*3.14*r;
ca=3.14*r*r;
printf(" \nCircumference=%f",c);
printf(" \nArea of circle=%f",ca);
return 0;
}

