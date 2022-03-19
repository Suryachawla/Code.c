#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *ptr;
	ptr=(char*)malloc(10);
	printf("Surya chawla\n");
	strcpy(ptr,"programming");
	printf("%s, address=%u\n",ptr,ptr);
	
	ptr=(char*)realloc(ptr,20);
	strcat(ptr,"in 'c'");
	printf("%s, address=%u\n",ptr,ptr);
	free(ptr);
	return 0;
}
