// WAP in C to check 2 strings are anagram or not.
// i/p: char s1[10]=”2h#p”, s2[10]=”&p2h”;
// o/p: Yes both string Anagram

#include<stdio.h>
void print_array(char *);
int check_anagram(char *s1,char *s2)
{
	char *p = s1;
	char *q = s2;
	
	int flag=0;
	while(*p)
	{
		q = s2;
		while(*q)
		{
			if(*p == *q)
			{
				flag=1;
				break;
			}
			else
			{
				flag =0;
				q++;
			}
		}
	if(flag ==1)
		p++;
	else
		break;	
	}
	if(flag==1)
		return 1;
	else
		return 0;
}
void main()
{
	char s1[20],s2[20];

	printf("Enter the string : \n");
	scanf("%[^\n] %[^\n]",s1,s2);
	
//	print_array(s);
	
	int ans = check_anagram(s1,s2);
	
	if(ans==1)
		printf("Yes.....\n");
	else
		printf("No.....\n");
//	print_array(d);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
