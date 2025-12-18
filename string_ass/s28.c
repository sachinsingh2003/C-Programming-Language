// WAP in C to reverse last word in string using pointer.
// i/p: char s[20]=”vector india coding”;
// o/p: vector india gnidoc

#include<stdio.h>
void print_array(char *);
void reverse_last_word(char * str)
{
	char *src ;
	char *des = str ;
	while(*des)
		des++;
	des--;
	
	src = des;
	while(*src != ' ')
	{
		src--;
	}
	src++;
	while(src<des)
	{
		char temp = *src;
		*src = *des;
		*des = temp;
		
		src++;
		des--;
	}
}
void main()
{
	char s[20];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	reverse_last_word(s);

	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
