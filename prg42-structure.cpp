#include<stdio.h>
struct hostel
{
	int room;
	char *name;
	int memb;
};

int main(	)
{
	struct hostel v1;
	v1.name="mani";
	v1.room=334;
	
	v1.memb=4;
	printf("\nname=%s",v1.name);
	printf("\nroom no=%d",v1.room);
	printf("\nmembers=%d",v1.memb);	
	return 0;
}
