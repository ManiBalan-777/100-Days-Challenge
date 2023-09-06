#include<stdio.h>
int main()
{
	int choice,qnty,total,i;
	mani:
	printf("-----MENU CARD----");
	printf("\n1.coffee 	:10\n2.tea 		:7\n3.cold coffe 	:15\n4.milk shake	 :20\n");
	printf("Enter which one you drink and choose the number given in the above menu card 1-4:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n you choose coofee");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total+=qnty*10;
		
			break;
		case 2 :
			printf("\nyou choose tea");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total+=qnty*7;
		
		
			break;
		case 3:
			printf("\n you choose cold coffee");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total+=qnty*15;
			
			
			break;
		case 4:
			printf("\n you choose milk shake");
			printf("\n enter how many of you buy:");
			scanf("%d",&qnty);
			total+=qnty*20;
		
			break;
			
			
	}
	printf("\nif you wanna continue press 7???");
	scanf("%d",&i);
	if(i==7)
		goto mani;
	else 
		printf("\nThank you come again Bye-----");
		printf("\n So,the total amount is %d",total);
	return 0;
}
