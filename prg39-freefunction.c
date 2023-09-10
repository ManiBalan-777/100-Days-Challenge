#include<stdio.h>
#include<stdlib.h>
int * get_values(int);
int main()
{
	int i,n,k=0;
	printf("\n Enter the limit:");
	scanf("%d",&n);
	int *ptr=get_values(n);
	for(i=0;i<n;i++)
	{
		k+=*(ptr+i);
	}
	printf("total=%d",k);
	printf("\n Before free() function");
	printf("\n print ptr=%d",*ptr);
	printf("\n print ptr=%d",ptr);
	free(ptr);
	ptr=NULL;
	printf("\n After free() function");
	if(ptr==NULL)
	{
		printf("\n The value should be freeed");
	}
	
	return 0;
}
int *get_values(int n)
{
	int i;
	
	int *ptr=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the number:");
		scanf("%d",ptr+i);
	}
	return ptr;
}
