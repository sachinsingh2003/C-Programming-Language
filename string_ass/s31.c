// WAP in C to check string is Palindrome or not.
// i/p: s[20]= “radar”
// o/p: yes

#include<stdio.h>
void print_array(char *);
int pallindrome(char * str)
{
	char *p = str;
	char *q = str;
	while(*q)
		q++;
	q--;
	
	while(p<q)
	{
		if(*p++ != *q--)
		{	
			return 0;
			break;
		}
			
	}	
	
}
void main()
{
	char s[20];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	int ans = pallindrome(s);

	if(ans==0)
		printf("NO\n");
	else
		printf("YES\n");
//	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
