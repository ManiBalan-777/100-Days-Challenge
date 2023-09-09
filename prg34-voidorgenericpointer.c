#include<stdio.h>
int main()
{
	int a=10;
	void *p;
	p=&a;
	printf("\n *p=%d",*(int*)p);
	return 0;
}
