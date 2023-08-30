#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j++)
		{
//			printf("%d",j);
printf(" * ");
			
		}
		printf("\n");
	}
}
