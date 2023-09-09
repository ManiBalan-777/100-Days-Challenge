#include<stdio.h>
int main()
{
	char a[]={'a','b','c'};

	//const char *p=a;
		//no changeble	
		//address increment possible
	//char const *p=a;
		//no changeble	
		//address increment possible
	char *const p=a;
		//no changeble	
		//address increment possible
	//const char*const p=a;
	printf("%c",*p);
	*p='x';
	//p++;
	printf("\n%c",*p);

	return 0;
}
