#include<stdio.h>
#include<stdlib.h>

/*question :
int main()
{
int *p;
*p=100;
return 0;
}
solution 1:
*/
int call();
int call()
{
	int *p=(int *)malloc(sizeof(int));
	*p=50;
	printf("\n value=%d",*p);
	return 0;
}
int main()
{
	int n;
	
	
		int *p;
		int a=10;
		p=&a;
		printf("\n value=%d",*p);
	
		printf("\nIf you want to call call() function press 1:");
		scanf("%d",&n);
		if(n==1)
		{
			call();
			
		}
		else
		{
			exit(0);
		}
		
	
		return 0;
}
