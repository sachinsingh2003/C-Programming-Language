// WAP in C to insert a char at 2nd index in string .
// i/p: char s[10]=”abcdef” , in=2 , ch=’9’;
// o/p: ab9cde

#include<stdio.h>
void print_string(const char *);
void insert_char(char *,int,char);
int str_len(char *);
void main()
{
	char s[20],ch;
	int index;
	int count=0;
	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	printf("Enter the index at which u want to insert the char:\n");
	scanf("%d",&index);

	printf("Enter the char :\n");
	scanf(" %c",&ch);

	print_string(s);

	insert_char(s,index,ch);
	print_string(s);

	count++;
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
void insert_char(char *str,int index,char ch)
{
/*
	int len = str_len(str);
	
	int i;
	for(i=len;i>=index;i--)
	{
		str[i+1] = str[i];
	}
	i++;
	str[i] = ch;
*/

	char *src =  str;
//	char *des = str;

	while(*src)
		src++;

	while(src >= str + index)
	{
		*(src+1) = *src;
		src-- ;
	}

	*(src+index) = ch;
}

