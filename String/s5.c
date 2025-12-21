// WAP in C to add digits in string using char pointer.
// i/p: char s[20]= “123 hello by6” , *cp;
// o/p: sum= 12

#include<stdio.h>
void main()
{
	char s[30],*p;
	
	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	p=s;

	int sum =0;
	for(int i=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			sum = sum + p[i] -'0';
	}	
	
	printf("sum  is : %d \n",sum);
}
