#include<stdio.h>
int main()
{
	int i;
	char c;
	char name[10];
	printf("\n Entrer the number:");
	scanf("%d",&i);
	printf("\n Entrer the character:");
	fflush(stdin);
	c=getchar();
	putchar(c);
	printf("\n Entrer the name:");
	fflush(stdin);
	gets(name);
	puts(name);
	return 0;
}
