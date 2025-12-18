// copy a string
// void my_strncpy( char *p, char *q, int n );

#include<stdio.h>
#include<string.h>
void print_string(char *);
void rec_fun_copy(char *p,char *q)
{
	if(*p =='\0')
		return;
	*q = *p;
	 
	rec_fun_copy(p+1,q+1);
}
void main()
{
	char s[20],d[20];
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);

	rec_fun_copy(s,d);
	
	printf("Destination : \n");
	print_string(d);
}
void print_string(char *str)
{

	printf("String :");
	
	printf("%s ",str);
	printf("\n");
}
