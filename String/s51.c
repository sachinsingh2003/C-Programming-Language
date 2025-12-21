// WAP in C to delete largest word from string.
// i/p: char s[20]=”c vector ds coder”
// o/p: char s[20]=”c ds coder”

#include<stdio.h>
void print_string(char * str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");
}
int length(char *str)
{
	char *p = str;
	int count=0;
	while(*p !=' ' && *p !='\0')
	{	
		count++;
		p++;
	}	
	return count;	
}
void delete_largest(char *str)
{
	char *p = str;
    	char *q = str;
	char *a ,*b;
	int max_len = 0;
	
 	while(*p)
	{
		q = p;
		while(*q !=' ' && *q !='\0')
			q++;
		if(length(p)>max_len)
		{
			max_len = length(p);
			a = p;
		}
		if(*q=='\0')
			p = q;
		else
			p = q+1;
	}
	
	b = a;
	while(*b !=' ' && *b !='\0')
		b++;
	if(*b == ' ')
	{
		b++;
		while(*b != '\0')
			*a++ = *b++ ;	
	}
	else
	{
		while(*b != '\0')
			*a++ = *b++;
	}
	*a = '\0';
	
}
void main()
{
	char s[30];
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);
	
	delete_largest(s);
	
	print_string(s);
}
