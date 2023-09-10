#include<stdio.h>
struct hostel
{
	int room;
	char *name;
	int memb;
};
void display(struct hostel v1)
{
	printf("\nname=%s",v1.name);
	printf("\nroom no=%d",v1.room);
	printf("\nmembers=%d",v1.memb);	
}
int main(	)
{
	struct hostel v1={334,"mani",4};
	display(v1);
	

	return 0;
}
