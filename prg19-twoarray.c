#include<stdio.h>
int main()
{
	int a[10][10],n,i,j;
	printf("enter limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter the array  values:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t[%d]",a[i][j]);
		
		}
		printf("\n");
	}
	return 0;
}
