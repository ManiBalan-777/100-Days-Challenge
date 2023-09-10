#include<stdio.h>
int main()
{
	int i=1;
	mani:
	printf("\n%d",i);
	i++;
	if(i<=10)
		goto mani;
	return 0;
}
