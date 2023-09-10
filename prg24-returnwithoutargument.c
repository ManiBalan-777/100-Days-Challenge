#include<stdio.h>
int add();
int main()
{
	int c;
	c=add();
	printf("\n total=%d",c);
	return 0;
}
int add()
{
	int a,b;
	printf("\n enter a and b:");
	scanf("%d%d",&a,&b);
	return a+b;
}
