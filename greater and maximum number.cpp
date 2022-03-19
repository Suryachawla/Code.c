#include<stdio.h>
#include<conio.h>
int main()
{
	double n1,n2,n3;
	printf("Surya chawla\n");
	printf("enter three number\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	if(n1>=2 && n1>=n3)
		printf("%2f is greater and maximum number",n1);
	else if (n2>=n1 && n2>=n3)
		printf("%2f is greater and maximum number",n2);
	else 
		printf("%2f is greater and maxium number",n3);
return 0;
}
