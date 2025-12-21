// WAP in C to print word ending with letter ‘g’.
// i/p: char s[20]=”c ds coding doing”;
// o/p: coding doing

#include<stdio.h>
#include<string.h>
void print_string(const char *);
void reverse(char *src,char *des)
{
	char *p = src;
	char *q = des;

	while(p<q)
	{
		char temp = *p;
		*p = *q;
		*q = temp ;
	
		p++;
		q--;
	}	
}
void word_ending_with_g(char *str)
{	
	char *p = str;
	char *q = str;
	
	while(*q)
		q++;
	q--;
	
	reverse(p,q);
	
	q = str;
	
	while(*p)
	{
		if(*p=='g')
		{
			while(*q !=' ' && *q != '\0')
				q++;
			q--;
			reverse(p,q);
			while(*p !=' ' )
			{	
				printf("%s",*p);
				p++;
			}		
		}
		p = q+2;
	}
}
void main()
{
	char s[20];
	
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	word_ending_with_g(s);
	
	
}
void print_string(const char *str)
{
	printf("Input :");
	printf("%s",str);
	printf("\n");

}	

