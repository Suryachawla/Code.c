#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2],i,j;
	printf("Surya chawla\n");
	printf("enter array element\n");
	for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{scanf("%d",&a[i][j]);}
}
printf("matrix element\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{printf("%d",a[i][j]);}
}
return 0;
}
