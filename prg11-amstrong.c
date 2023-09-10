#include<stdio.h>
int main()
{
	int n,q1,q2,r1,r2,amst;
	printf("\n Enter the 3 digit number:");
	scanf("%d",&n);
	q1=n/10;
	r1=n%10;
	q2=q1/10;
	r2=q1%10;
	amst=(r1*r1*r1)+(r2*r2*r2)+(q2*q2*q2);
	if(n==amst)
	{
		printf("%d IS A AMSTRONG NUMBER",n);
	}
	else
	{
		printf("%d IS not AMSTRONG NUMBER",n);
	}
return 0;
	
}
