// WAP in C to reverse string using while loop .
// i/p: char s[10]=”gnidoc 321”;
// o/p: 123 coding

#include<stdio.h>
void main()
{
	char s[30],*p,*q;
	
	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	p=s;
	q = p;
	
	while(*q)
		q++;

	q--;
	while(p<q)
	{
		char temp = *p; 
		    *p  =  *q;
		    *q  = temp;

		p++;
		q--; 
	}
	printf("%s \n",s);
	

}
