// WAP in C using Recursive fun to reverse string .
// i/p: char s[20]=”123 abc 789”;
// o/p: 987 cba 321
// void rec_fun_rev_string( char *p, char *q );

#include<stdio.h>
#include<string.h>
void print_string(char *);
void rec_fun_rev_string(char *p,char *q)
{
	if(p<q)
	{
		int temp = *p;
		*p = *q;
		*q = temp;

		rec_fun_rev_string(p+1,q-1);	
	}

}
void main()
{
	char s[20];
	char *ss = s;
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);

	int len = strlen(s);
	ss = s + (len-1);
	rec_fun_rev_string(s,ss);

	print_string(s);
}
void print_string(char *str)
{

	printf("String :");
	
	printf("%s ",str);
	printf("\n");
}
