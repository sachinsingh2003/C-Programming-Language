// WAP to check the character is upper case ,lower case , digit or special char............

#include<stdio.h>
void main()
{
	char ch ;
	printf("Enter any character :-\n");
	scanf("%c",&ch);
	

	ch >='A' && ch <= 'Z' ? printf("Upper Case\n") : ch >= 'a' && ch <='z' ? printf("Lower Case\n") : ch>=48 && ch <=57? printf("Digits\n"):printf("Special Character\n"); 

}
