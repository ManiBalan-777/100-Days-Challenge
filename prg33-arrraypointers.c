#include<stdio.h>
int main()
{
	int i;
	int ar[]={10,20,30,40,50};
	int *p;
	printf("\n Size of array=%d",sizeof(ar));
	printf("\n Size if one integer=%d",sizeof(int));
	printf("\n Length of the array=%d",(sizeof(ar))/(sizeof(int)));
	printf("\n ----------------------");
	p=&ar;
	printf("\n value of p			:%d",p);
	printf("\n ----------------------");
	p=&ar;
	printf("\n value of p++			:%d",p++);
	printf("\n value of p++			:%d",p++);
	printf("\n value of p++			:%d",p++);
	printf("\n value of p++			:%d",p++);
	printf("\n value of p++			:%d",p++);
	printf("\n ----------------------");
	p=&ar;
	printf("\n value of ++p			:%d",++p);
	printf("\n value of ++p			:%d",++p);
	printf("\n value of ++p			:%d",++p);
	printf("\n value of ++p			:%d",++p);
	printf("\n value of ++p			:%d",++p);
	printf("\n ----------------------");
	p=&ar;
	printf("\n Dereferncing of *p		:%d",*p);
		
	printf("\n ----------------------");
	p=&ar;
	printf("\n Dereferncing of *p++		:%d",*p++);
	printf("\n Dereferncing of *p++		:%d",*p++);
	printf("\n Dereferncing of *p++		:%d",*p++);
	printf("\n Dereferncing of *p++		:%d",*p++);
	printf("\n Dereferncing of *p++		:%d",*p++);
	
	printf("\n ----------------------");
	p=&ar;
	printf("\n Dereferncing of *++p		:%d",*++p);
	printf("\n Dereferncing of *++p		:%d",*++p);
	printf("\n Dereferncing of *++p		:%d",*++p);
	printf("\n Dereferncing of *++p		:%d",*++p);
	printf("\n Dereferncing of *++p		:%d",*++p);
	printf("\n ----------------------");
	p=&ar;
	printf("\n Dereferncing of ++*p		:%d",++*p);	
	printf("\n Dereferncing of ++*p		:%d",++*p);
	printf("\n Dereferncing of ++*p		:%d",++*p);
	printf("\n Dereferncing of ++*p		:%d",++*p);
	printf("\n Dereferncing of ++*p		:%d",++*p);
	printf("\n ----------------------");
	
		
	return 0;
}
