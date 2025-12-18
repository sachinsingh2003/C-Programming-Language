// WAP in C to print binary of all char in string .
// i/p: char s[20]=”12 ab AB”;

#include<stdio.h>
void main()
{
	char s[30],*p;
	
	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	p=s;
	printf("Char  Binary \n");
	for(int i=0;p[i];i++)
	{
		printf("%c   (%d)      ",p[i],p[i]);
		for(int pos=31;pos>=0;pos--)
			printf("%d",p[i]>>pos&1);
		printf("\n");
		
	}
}
