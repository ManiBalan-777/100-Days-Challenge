#include<stdio.h>
int main()
{
	int choice,qnty,total;
	printf("-----MENU CARD----");
	printf("\n1.coffee :10\n2.tea :7\n3.cold coffe :15\n milk shake :20\n");
	printf("enter your choice between 1 -4:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n you choose coofee");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total=qnty*10;
			printf("\n So,the total amount is %d",total);
			
			break;
		case 2:
			printf("\nyou choose tea");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total=qnty*7;
			printf("\n So,the total amount is %d",total);
		
			break;
		case 3:
			printf("\n you choose cold coffee");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total=qnty*15;
			printf("\n So,the total amount is %d",total);
			
			break;
		case4:
			printf("\n you choose milk shake");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total=qnty*20;
			printf("\n So,the total amount is %d",total);
			break;
			
			
	}
	return 0;
}
