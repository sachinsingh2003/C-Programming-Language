// WAP in C to delete prime digit from string.
// i/p: char s[20]=”abc3456 567abc”;
// o/p: abc46 6abc

#include<stdio.h>
int is_prime(char);
void print_string(const char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");
}
int is_digit(char ch)
{
	
	if(ch>='0' && ch<='9')
		return 1;
	else
		return 0;
	
}
void delete_digits(char * str)
{
	///////// using pointers////////////

	char *src = str;   // source pointer
	char *dest = str;   // destination pointer

	while(*src)
	{
		if(is_digit(*src) && is_prime(*src)) 
		{	 
			src++;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	*dest = '\0';

}
int is_prime(char ch)
{
	int num=ch-'0';
	int j=2;
	while(j<num)
	{
		if(num%j==0)
			break;
		j++;
	}
	if(num==j)
		return 1;
	else
		return 0;

}
void main()
{
	char s[30];
	int num;

	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	//	printf("Enter num of char to be deleted :\n");
	//	scanf("%d",&num);

	print_string(s);

	delete_digits(s);

	print_string(s);

}
