// WAP in C to print all word lenght in string .
// i/p: char s[20]= ”vector india pvt ”
// o/p: 6 5 3

#include<stdio.h>
void print_string(const char *);
int count_word_length(char *);
int str_len(char *);
void main()
{
	char s[20];
	int index;
	int count=0;
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);

	count_word_length(s);

//	print_string(s);
//	printf("Count is : %d ",count);

}
void print_string(const char *str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");

}
int str_len(char *str)
{
	int len;
	for(len=0;str[len];len++);
	return len;
	
}
int count_word_length(char *str)
{
	int count=0;
	for(int i=0;i<=str_len(str);i++)
	{
		
		if(str[i]==' ' || str[i]=='\0')
		{
			printf(": %d",count);
			printf("\n");
			count=0;
		}
		
		else
		{
			count++;
			printf("%c",str[i]);
		}
	}
}	

