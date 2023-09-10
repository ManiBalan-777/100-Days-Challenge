#include<stdio.h>
struct market {
	char*name;
	double price;
	int model;
	char *color;
	char author;
}v1;
struct seperate
{
	double price;
	union choose
	{
		struct mobile
		{
				int model;
				char *color;
		}s2;
		struct book
		{
				char*name;
				char author;
		}s3;
	}u1;
}s1;
int main()
{
	printf("\n sizeof the market structure:%d",sizeof(struct market));
	printf("\n sizeof the SEPERATE structure:%d",sizeof(struct seperate));
	s1.u1.s2.color="red";
	printf("\n");
	printf(s1.u1.s2.color);
	return 0;
	
}
