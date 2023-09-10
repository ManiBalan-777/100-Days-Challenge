#include<stdio.h>
#include<stdlib.h>
struct hostel
{
	int room;
	char *name;
	int memb;
};

int main(	)
{
	struct hostel v1={334,"mani",4};
	struct hostel *ptr=&v1;
	printf("\n name		=%s",ptr->name);
	printf("\n room no	=%d",(*ptr).room);
	

	printf("\n members	=%d",ptr->memb);	
	return 0;
}
