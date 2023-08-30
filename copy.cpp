
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i=0;
char c,a[100];
FILE *f1;

f1=fopen("iron.c","r");
while((c=fgetc(f1))!=EOF)
{


a[i++]=c;
printf("%c",c);
}
fclose(f1);

return 1;
}
