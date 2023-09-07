#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	add(a,b);
	add(6,6);//Actual parametrer
	return 0;
}
void add(int a,int b)// Formal paramater
{
		int c;
	
	c=a+b;
	printf("\n total=%d",c);
}
