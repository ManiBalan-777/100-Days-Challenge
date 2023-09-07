#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("\nenter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nthe array value is:");
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
			printf("\n[%d]",arr[i]);
	
	}

	
	return 0;
}


