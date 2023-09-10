#include<stdio.h>
int main()
{
	int a,*p,*r;
	printf("\n Enter a");
	scanf("%d",&a);
	p=&a;
	r=p+1;
	r=*p+1;

printf("size of :%d",sizeof(a));

	printf("\n Value of a=%d",a);
	printf("\n address of a=%d",&a);
	printf("\n value of p=%d",p);
	printf("\n address of p=%d",&p);
	printf("\n Dereferencing of p=%d",*p);
	printf("\n Value of r=%d",r);
	printf("\n Value of r=%d",*r);
	return 0;
}
