// WAP in C to reverse all words in string.
// i/p: char s[20]=“coding sirji vector”
// o/p:char s[20]= “gnidoc ijris rotcev”

#include<stdio.h>
#include<string.h>
void print_array(char *);
void reverse_all_words(char * str)
{
	char *p = str;
	char *q = str;
	char *r = str;

	while(*r)
	{
		if(*r==' ')
		{
			q = r-1;
			while(p<q)
			{
				int temp = *p;
				*p =  *q;
				*q = temp;
				
				p++;
				q--;
			}
			p = r+1;	
		}
	r++;
	}		
	q = r-1;
	while(p<q)
	{
				
		int temp = *p;
		*p =  *q;
		*q = temp;
				
		p++;
		q--;	
	}
	*r = '\0';
}
void main()
{
	char s[30];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	reverse_all_words(s);
	
	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
