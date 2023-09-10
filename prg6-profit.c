#include<stdio.h>
int main()
{
	int total;
	float sell,profit,cost;
	printf("enter the total items:");
	scanf("%d",&total);
	printf("\n enter the selling price of %d items:",total);
	scanf("%f",&sell);
	printf("\n enter the profit:");
	scanf("%f",&profit);
	cost=(sell-profit)/total;
	printf("\n cost of each item is RS.%f",cost);
	return 1;
}
