#include<stdio.h>
int main()
{
	int a,*p;
	//Double Pointer **val
	//Triple pointer ***val
	printf("\n Enter a");
	scanf("%d",&a);
	p=&a;
	printf("\n Value of a=%d",a);
	printf("\n address of a=%d",&a);
	printf("\n value of p=%d",p);
	printf("\n address of p=%d",&p);
	printf("\n Dereferencing of p=%d",*p);
	return 0;
}
