#include<stdio.h>
struct student
{
	int rollno;
	char *name;
	char *dept;
};

void add()
{
struct marks
	{
		
		int mark;
		float avg;
		int total;
	};	
	int arr[10],i;
	int sub;
	struct marks s1;
	s1.total=0;
	printf("\n Enter the total subject:");
	scanf("%d",&sub);
	for(i=0;i<sub;i++)
	{
		printf("\n Enter mark for subject %d:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<sub;i++)
	{
		//printf("\n array value=%d:",arr[i]);
		s1.total+=arr[i];
		
	}
	printf("\n total value=%d:",s1.total);
	s1.avg=s1.total/sub;
	printf("\n Average=%f",s1.avg);
	
}
int main(	)
{
	struct student v1;
	v1.name="rose";
	v1.dept="cse";
	v1.rollno=777;
	printf("\n	name=%s",v1.name);
	printf("\n	roll no=%d",v1.rollno);
	printf("\n	dept=%s",v1.dept);
	add();	
	return 0;
}
