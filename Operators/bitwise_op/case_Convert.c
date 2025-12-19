// WAP to convert lower case char to upper case or upper to lower case -:


#include<stdio.h>

void main(){

	char ch;
	printf("Enter character:-\n");
	scanf("%c",&ch);
	
	printf("Before : %c\n",ch);
	
	ch = ch ^ 32;
	
	printf("After : %c\n",ch);
}
