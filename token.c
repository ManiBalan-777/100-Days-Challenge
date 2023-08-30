#include <stdio.h>
#include <ctype.h>
#include <string.h>

int keyword(char *arr) 
{
	int i=0;
    char keywords[][10] = 
	{
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned","printf","fprintf","fscanf","fclose","fopen",
        "void", "volatile", "while","main"
    };

   for ( i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) 
   {
        if(strcmp(arr, keywords[i]) == 0) 
		{
            return 1; 
        }
    }
    return 0;
}

int main() 
{
    FILE *f1,*f2;
    char c, arr[50];
    int i = 0;
	char filename[100];
	printf("enter the file name:\n");
	scanf("%s",filename);
	
	f1 = fopen(filename, "r");
	f2 = fopen("dest.c","w");
    if(f1 == NULL) 
	{
        printf("File not found!\n");
        return 1;
    }
	else
	{
	
    printf("Identify which type of token:\n");

    while((c = fgetc(f1)) != EOF) 
	{
        if(isalpha(c) || c=='_') 
		
		{
            while(isalnum(c) || c == '_') 
			{
                arr[i++] = c;
                c = fgetc(f1);
            }
            arr[i] = '\0';
            i = 0;

            if(keyword(arr)) 
			{
                printf("%s is a keyword\n", arr);
                fprintf(f2,"%s is a keyword \n", arr);
            } 
			else 
			{
                printf("%s is an identifier\n", arr);
                fprintf(f2,"%s is a identifier\n", arr);
            }
        } 
		else if(isdigit(c)) 
		{
            while(isdigit(c)||c=='.') 
			{
                arr[i++] = c;
                c = fgetc(f1);
            }
            arr[i] = '\0';
            i = 0;
            printf("%s is a constant\n", arr);
            fprintf(f2,"%s is a constant\n", arr);
            if(isalpha(c))
            {
            	while(isalnum(c) || c == '_') 
				{
                arr[i++] = c;
                c = fgetc(f1);
            	}
            	arr[i] = '\0';
            	i = 0;

            	if(keyword(arr)) 
				{
                printf("%s is a keyword\n", arr);
                fprintf(f2,"%s is a keyword\n", arr);
            	} 
				else 
				{
                printf("%s is an identifier\n", arr);
                fprintf(f2,"%s is a identifier\n", arr);
            	}
        	} 
        } 
		else if(c == '#') 
		{
            while(c != '\n') 
			{
                arr[i++] = c;
                c = fgetc(f1);
            }
            arr[i] = '\0';
            i = 0;
            printf("%s is a preprocessor directive\n", arr);
            fprintf(f2,"%s is a preprocessor directive\n", arr);
        } 
		else if(c == '"' || c == '\'') 
		{
            char delimiter = c;
            arr[i++] = c;

            do 
			{
                c = fgetc(f1);
                arr[i++] = c;
            } while(c != delimiter);

            arr[i] = '\0';
            i = 0;
            printf("%s is a string literal or character constant\n", arr);
            fprintf(f2,"%s is a string literal or character constant\n", arr);
        } else if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '[' || c == ']' ||
                   c == '{' || c == '}'  ||c == '=' || c == '>' || c == '<' || c == '&' || c == '|') {
            printf("%c is an operator\n", c);
            fprintf(f2,"%c is a operator\n", c);
        }
    }
}
    fclose(f1);
    return 0;
}
