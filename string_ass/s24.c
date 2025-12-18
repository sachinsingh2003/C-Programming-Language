// WAP in C to print first word from string using goto.
// i/p: char s[20]=”vector india pvt”;
// o/p: vector

#include<stdio.h>
void print_string(const char *);

void main()
{
	char s[20];
	
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);
	
	int i=0;
	printf("Output : ");
L1:
	printf("%c",s[i]);
	if(s[i] != ' ')
	{	
		i++;
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

