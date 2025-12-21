// WAP in C to print ascii , octal , hex of given string.
// i/p : char s[10]=”program” ;
// o/p : p --> 112 160 70


#include<stdio.h>
void main()
{
	char s[30],*p;
	
	printf("Enter the string : \n");
	scanf("%[^\n]",s);

	printf("ASCII     OCTAL     HEXA \n");
	for(int i=0;s[i];i++)
	{
		printf("%c     %d     %o     %x\n",s[i],s[i],s[i],s[i]);
	}
}
