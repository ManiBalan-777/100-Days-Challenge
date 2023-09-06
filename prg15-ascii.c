#include<stdio.h>
int  main()
{
	int i,a;
	char c;
	printf("enter which ascii value you want?");
	scanf("%d",&a);
	for(i=0;i<=255;i++)
	{
		printf("\nASCII VALUES for =%d ::: %c",i,i);
		if(i==a)
		{
			printf("\nasciee value for %d  is %c",a,i);
		}
		
	}
		printf("\nasciee value for %d  is %c",a,a);
		
	
	
		
	return 0;
	
}
