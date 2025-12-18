// WAP in C to count digits in string using pointer .
// i/p: char s[20]=”p6c3s1 123 ok7”;
// o/p: count = 7

#include<stdio.h>
void main()
{
	char s[30],*p;
	
	printf("Enter the string : \n");
	scanf("%[^\n]",s);

	p = s;
	int len;
	for(len=0;*(p+len);len++);
	printf("len = %d ",len);
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(p[i] >='0' && p[i] <='9')
			count++;
	}
	printf("Count of digit = %d \n",count);

}
