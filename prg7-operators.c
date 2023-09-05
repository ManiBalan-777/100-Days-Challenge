#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("\"OPERATORS\"");
	printf("\n Enter a:");
	scanf("%d",&a);
	printf("\n Enter b:");
	scanf("%d",&b);
	printf("\n\"Arithmetic Operators\"");
	c=a+b;
	printf("\n ADDITION=		%d",c);
	c=a-b;
	printf("\n SUBRACTION=		%d",c);
	c=a*b;
	printf("\n MULTIPLICATION=	%d",c);
	c=a/b;
	printf("\n DIVISION=		%d",c);
	c=a%b;
	printf("\n MODULUS=		%d",c);
	//
	printf("\n\"ASSIGNMENT OPERATOR\"");
	printf("\nvalue of a=%d",a);
	a+=b;
	printf("\n ADDITION=		%d",a);
	a-=b;
	printf("\n SUBRACTION=		%d",a);
	a*=b;
	printf("\n MULTIPLICATION=	%d",a);
	a/=b;
	printf("\n DIVISION=		%d",a);
	a%=b;
	printf("\n MODULUS=		%d",a);
	
	
	
	return 0;
}
