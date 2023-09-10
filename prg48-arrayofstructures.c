#include<stdio.h>
struct hostel
{
	int room;
	char *name;
	int memb;
};

int main(	)
{
	struct hostel v1[2];
	v1[0].room=334;
	v1[0].name="mani";
	v1[0].memb=4;
	v1[1].room=331;
	v1[1].name="balan";
	v1[1].memb=5;
	
	
	printf("\nname=%s",v1[0].name);
	printf("\nroom no=%d",v1[0].room);
	printf("\nmembers=%d",v1[0].memb);	
		printf("\nname=%s",v1[1].name);
	printf("\nroom no=%d",v1[1].room);
	printf("\nmembers=%d",v1[1].memb);	
	return 0;
}
