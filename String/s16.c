// WAP in c to delete digits from string .
// i/p: char s[20]=”covid19 a12b”;
// o/p: covid ab

#include<stdio.h>
void print_string(const char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");
}
void delete_digits(char * str)
{
/*
	int k=0;
	for(int i=0;i<str[i];i++)
	{
		if(str[i] >='0' && str[i] <='9' )
			continue;
		else
			str[k++] = str[i];
	}
	str[k] = '\0';	
*/
////////// using pointers////////////

	char *src = str;   // source pointer
	char *dest = str;   // destination pointer

	while(*src)
	{
		if(*src >= '0' && *src <='9' )
			src++;
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	*dest = '\0';
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
