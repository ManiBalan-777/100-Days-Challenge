#include<stdio.h>
int main()
{
	int amt,hun,fif,rem,twe,ten,coins;
	printf("\nenter the total amount:");
	scanf("%d",&amt);
	hun=amt/100;
	rem=amt%100;
	fif=(rem/50);
	twe=((rem%50)/20);
	ten=(((rem%50)%20)/10);
	coins=((((rem%50)%20)%10)/1);
	
	printf("\nhow many 100's required:%d",hun);
	printf("\nhow many 50's require:%d",fif);
	printf("\nhow many 20's require:%d",twe);
	printf("\nhow many 10's require:%d",ten);
	printf("\nhow many coins require:%d",coins);
	
}
