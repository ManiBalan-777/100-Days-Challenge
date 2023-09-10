#include<stdio.h>
union uni
{
	int num;
	char name;
}v1;
int main()
{
	v1.num=65;
	printf("\n name=%c",v1.name);
	printf("\n num=%d",v1.num);
	return 0;
}
