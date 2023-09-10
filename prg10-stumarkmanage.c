#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float average;
	printf("\n enter m1:");
	scanf("%d",&m1);
	printf("\n enter m2:");
	scanf("%d",&m2);
	printf("\n enter m3:");
	scanf("%d",&m3);
	printf("\n enter m4:");
	scanf("%d",&m4);
	printf("\n enter m5:");
	scanf("%d",&m5);
	total=m1+m2+m3+m4+m5;
	average=total/5.0;
	printf("\n total=%d",total);
	printf("\n average=%0.2f",average);
	if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
	{
		printf("\n pass");
		if(average>=90&&average<100)
		{
			printf("\ntopper");
		}
		else if(average>=60&&average<90)
		{
			printf("\npadipz");
		}
		else if(average>=35&&average<60)
		{
			printf("\n2medium padeepz");
		}
	}
	else
	{
		printf("\n fail");
	}
	return 0;
}
