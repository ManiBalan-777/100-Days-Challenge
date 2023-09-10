#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
		int a,b,c;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	c=a+b;
	printf("\n total=%d",c);
}
