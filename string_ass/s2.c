// WAP in C to find lenght of string using pointer.
// i/p: basic_program , char s[20],*p;
// o/p: lenght= 13

#include<stdio.h>
void main()
{
	char s[30],*p;
	
	printf("Enter the string : \n");
	scanf("%[^\n]",s);

	p = s;
	int len;
	for(len=0;*(p+len);len++);
	printf("New String lenght is : %d \n",len);

}
