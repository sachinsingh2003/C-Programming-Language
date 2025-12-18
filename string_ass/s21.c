// WAP in C to count words in given string using goto.
// i/p:char s[20]=”hi 5 #$2 cs”;
// o/p: word count= 4

#include<stdio.h>
void print_string(const char *);
int count_word(char *);
int str_len(char *);
void main()
{
	char s[20];
	int index;
	int count=0;
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);

	count = count_word(s);

//	print_string(s);
	printf("Count is : %d ",count);

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
int count_word(char *str)
{

	int count = 1 ;
/*	for(int i=0;i<str_len(str);i++)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			count++;
		}

	}
	return count;
*/
	char *p = str;
	while(*p)
	{
		if(*p ==' ' || *p == '\0')
			count++;
	p++;
	}
	return count;
}	

