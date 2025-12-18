// WAP in C using Recursive function to count char in given any string .
// i/p: char s[20]=”123 aacc tata ”; , ch= ‘a’
// o/p: count = 4
// int rec_fun_count_string( char *p, char ch );

#include<stdio.h>
#include<string.h>
void print_string(char *);
int rec_fun_count_char(char *p,char ch)
{
	static int count=0;
	if(*p != '\0') 
	{
		if(*p ==ch)
			count++;
		rec_fun_count_char(p+1,ch);	
	}
	return count;

}
void main()
{
	char s[20],ch;
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	printf("Enter the character to count :");
	scanf(" %c",&ch);

	print_string(s);

	int count = rec_fun_count_char(s,ch);
	printf("Count of char is :%d ",count);
//	print_string(s);
}
void print_string(char *str)
{

	printf("String :");
	
	printf("%s ",str);
	printf("\n");
}
