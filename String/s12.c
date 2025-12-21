// WAP in C to delete desired char from string.
// i/p:char s[20]=”acbcccab” , ch = ‘c’
// o/p: abab

#include<stdio.h>

char * str_chr(const char *,char);
void str_cpy(const char *,char *);
void print_string(const char * str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");
}
/*
void delete_char(char * str,char ch)
{
	int k=0;
	for(int i=0;str[i];i++)
	{
		if(str[i]== ch)
			continue;
		else
			str[k++]=str[i];
	}
	str[k]= '\0';
}
*/
void main()
{
	char s[20],ch,*p,*q;
	printf("Enter the string : \n");
	scanf("%s",s);
	
	printf("Enter the char :\n");
	scanf(" %c",&ch);

	print_string(s);
	p=s;
	while(q = str_chr(p,ch))
		str_cpy(q+1,q);

//	delete_char(s,ch);

	print_string(s);
}
char * str_chr(const char * str,char ch)
{
	for(int i=0;str[i];i++)
	{
		if(str[i]== ch)
			return &str[i];
	}
	return 0;
}
void str_cpy(const char *str,char *d)
{
	int i;
	for(i=0;str[i];i++)
	{
		d[i] = str[i];
	}
	d[i] = '\0';



}

