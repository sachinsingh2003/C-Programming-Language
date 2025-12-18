// WAP in C to Capitalize first letter of word in string.
// i/p: char s[30]= “pawan coding sirji ”
// o/p: Pawan Coding Sirji

#include<stdio.h>
void print_string(const char *);
void Capitalize_first_letter(char *);
int str_len(char *);
void main()
{
	char s[20];
	int index;
	int count=0;
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);

	Capitalize_first_letter(s);

	print_string(s);

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
void Capitalize_first_letter(char *str)
{
/*
	str[0] = str[0]^32;	
	for(int i=1;i<str_len(str);i++)
	{
		if(str[i]==' ')
		{
			str[i+1] = str[i+1]^32;
		}
	}
*/

	char *p = str;
	*(p+0) = *(p+0) ^ 32; 
	while(*p)
	{
		if(*p ==' ')
			*(p+1) = *(p+1)^32;

		p++;
	}
}	

