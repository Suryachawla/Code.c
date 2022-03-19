#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char s[15],f;
	int c=0,i;
	printf("Surya chawla\n");
	puts("enter the string\n");
	gets(s);
	puts("enter the character to find\n");
	f=getchar();
	for(i=0;i<=15;i++)
	{
		if(s[i]==f)
		c++;
	}
	printf("the character %c in a string %s occurs %d times",f,s,c);
	return 0;

}
