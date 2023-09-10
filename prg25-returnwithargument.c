#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,c;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	c=add(a,b);
	printf("\n total=%d",c);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
