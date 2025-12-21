// WAP in C to check string lenght is prime or not.
// i/p: char s[10]= ”pawan”;
// o/p: yes 5 is prime number

#include<stdio.h>
void main()
{
	char s[30];
	
	printf("Enter the string \n");
	scanf("%s",s);
	int len;
	for(len=0;s[len];len++);
	int i;
	for(i=2;i<len;i++)
	{
		if(len%i==0)
			break;
	}
	if(i==len)
		printf("Prime number");
	else
		printf("Not prime");

}
