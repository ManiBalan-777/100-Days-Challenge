#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
int main()
{
	int a,b;
	printf("\n Enter a and b:");
	scanf("%d%d",&a,&b);
	printf("\nBEFORE swap:a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\nAFTER swap:a=%d and b=%d",a,b);
	return 0;
}
