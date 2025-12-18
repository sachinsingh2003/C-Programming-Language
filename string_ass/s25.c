// WAP in C to print last word from string using goto.
// i/p: char s[20]=”vector india coding”;
// o/p: coding

#include<stdio.h>
#include<string.h>
void print_string(const char *);

void main()
{
	char s[20];
	
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);
	
	int len = strlen(s);

	char *p = s;
	while(*p)
		*p++;

	while(*p != ' ')
		*p--;
	p++;
	printf("Output : ");
L1:
	printf("%c",*p);
	if(*p != '\0')
	{	
		*p++;
		goto L1;
	}
	printf("\n");

}
void print_string(const char *str)
{
	printf("Input :");
	printf("%s",str);
	printf("\n");

}	

