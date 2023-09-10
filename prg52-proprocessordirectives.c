#include<stdio.h>
#include<stdlib.h>
#include "function.c"
#define n 5
#define ms "manly_mani"
#define message(m)\
printf("\n" #m " mani")

int main()
{
	message(welcome);
	int i;
//	add();//userdefined headerfile
	for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	printf("\n %s",ms);
	printf("\n TIME%s",__TIME__);
	printf("\nstdc %d",__STDC__);
	printf("\ntime statm %d",__TIMESTAMP__);
	printf("\nLINE %d",__LINE__);
	printf("\nFILE %s",__FILE__);
	printf("\nDATE %s",__DATE__);
	return 0;
}
