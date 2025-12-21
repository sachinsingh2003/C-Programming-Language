// WAP in C to reverse word having digit in string.
// i/p: char s[20]=“coding 123abc vector ptr1”;
// o/p: char s[20 =”coding cba321 vector 1rtp”

#include<stdio.h>
#include<string.h>
void print_array(char *);
int is_digit(char ch)
{
	if(ch >='0' && ch <= '9')
		return 1;
	else
		return 0;	
}
void reverse_word(char *src ,char *des)
{
	while(src<des)
	{
		char temp = *src;
		*src = *des;
		*des = temp;

		src++;
		des--;
	}	
}
void reverse_digit_words(char * str)
{
	char *p = str;
	char *q = str;
	char *r = str;
	while(*p)
	{
		if(is_digit(*p))
		{
			r = p;
			q = p; 
			while(*r != *str && *r != ' ')
				r--;
			
			if(*r==' ')
				r++;
			while(*q !=' ' && *q !='\0')
				q++;
			q--;
		
			reverse_word(r,q);	
			
 			p = q+2;
		}
		else
			p++;
	}

}
void main()
{
	char s[30];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	reverse_digit_words(s);
	
	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
