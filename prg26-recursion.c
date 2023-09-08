#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("\n The factorial of the given number=%d",fact(num));
	return 0;
}
int fact(int num)
{
	if(num<1)
		return 1;
	else
	return num*fact(num-1);
}

