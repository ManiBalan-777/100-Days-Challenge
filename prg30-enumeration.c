#include<stdio.h>
enum val{ a=10,b=20};
int main()
{
	enum val z;
	enum new {p,q=8,r};
	enum new new1;
	z=a;
	printf("\n Value of a=%d",a);
	z=b;
	printf("\n Value of b=%d",b);
	new1=p;
	printf("\n Value of p=%d",p);
	new1=q;
	printf("\n Value of q=%d",q);
	new1=r;
	printf("\n Value of r=%d",r);
	return 0;
}
