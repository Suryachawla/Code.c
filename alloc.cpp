#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	float*element;
	printf("Surya chawla\n");
	printf("\n pointer : find the largest element using dynamic memory alloction:\n");
	printf("input total number of element(1-100):");
	scanf("%d",&n);
	element=(float*)calloc(n,sizeof(float));
	if(element==NULL)
	{
		printf("no memory is alloction\n");
		exit(0);
	}
	printf("\n");
	for(i=0;i<n;++i)
	{
		printf("number %d",i+1);
		scanf("%f",element+1);
	}
	for(i=1;i<n;i++)
	{
		if(*element<*(element+i))
			*element=*(element+i);
	}
	printf("the largest elemenet is %.2f\n\n",*element);
	return 0;
}
