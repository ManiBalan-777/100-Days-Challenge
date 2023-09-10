#include<stdio.h>
int main()
{
	char c;
	FILE *f;
	f=fopen("source.txt","w");
	fprintf(f," comments\n");
	fclose(f);
	f=fopen("source.txt","r");
	if(f==NULL)
	{
		printf("\n not ooppenesd");
	}
	while(1)
	{
		c=fgetc(f);
		if(c==EOF)
			break;
		printf("%c",c);
	}
	
	return 0;

	
}
