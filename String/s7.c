// WAP in C to count set bit all char in string.
// i/p: char s[10]=”bcd”;
// o/p: 3 4 3

#include<stdio.h>
void main()
{
	char s[30],*p;
	
	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	p=s;
	printf("Char  Count \n");
	for(int i=0;p[i];i++)
	{
		int count=0;
		printf("%c        ",p[i]);
		for(int pos=31;pos>=0;pos--)
			if(p[i]>>pos&1)
				count++;

		printf("%d",count);
		printf("\n");
		
}
}
