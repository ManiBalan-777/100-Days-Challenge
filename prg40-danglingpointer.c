//Stagmentation fault error
#include<stdio.h>
#include<stdlib.h>
int * call()
{
	int a=10;
	//static variable address
	return &a;
	
}
int main()
{
	int *p=NULL;
	*p=call();
	printf("%d",*p);
	return 0;
}
