// WAP in C to reverse 1st word in string using pointer.
// i/p: char s[20]=”vector india pvt”;
// o/p: rotcev india pvt

#include<stdio.h>
void print_array(char *);
void reverse_first_word(char * str)
{
	char *src = str ;
	char *des = str ;
	while(*des != ' ')
		des++;
	des--;
	
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
	
	reverse_first_word(s);

	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
