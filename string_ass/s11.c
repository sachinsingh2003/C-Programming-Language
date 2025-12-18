// WAP in C to reverse first 3 letter from string .
// i/p: char s[10]=”gnidoc coding ”;
// o/p: ingdoc coding

#include<stdio.h>
void main()
{
	char s[30],*p,*q;
	
	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	p=s;

 	q = p + 2;
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
