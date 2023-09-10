#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("\n Enter the limit:");
	scanf("%d",&n);
	int *p=(int *)malloc(sizeof(int)*n);
	//p=(int *)realloc(p,sizeof(int)*2);
	
	if(p==NULL)
	{
		printf("\n Memory not allocated");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("\nRandom value=%d	",(p+i));
		printf("\n Enter the number that is New value assigned to Random value=:");
		scanf("%d",(p+i));
		printf("Print the real value=%d	",*(p+i));
		printf("\n");
	}
}
