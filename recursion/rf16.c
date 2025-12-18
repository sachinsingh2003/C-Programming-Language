// compare two strings
// int my_strncmp( char *p, char *q, int n );

#include<stdio.h>
int my_strcmp(char *p,char *q,int n)
{

	if(n==0)
	{
		return 0;
	}
	if(*p =='\0' && *q == '\0')
		return *p - *q;
	if(*p != *q)
		return *p - *q;

	return my_strcmp(p+1,q+1,n-1);	
}
void main()
{
	char s[20],d[20];
	int n;
	printf("Enter the string: \n");
	scanf("%[^\n] %[^\n]",s,d);
	
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	
	int ans = my_strcmp(s,d,n);
	if(ans==0)

		printf("EQUAL (first %d character )\n",n);
	else
		printf("NOT EQUAL (first %d charcters )\n",n);

}
