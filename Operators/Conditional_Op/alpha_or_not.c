// WAP to check given char is alphabet or not ------


#include<stdio.h>
void main()
{
char ch;
printf("Enter any character:-\n");
scanf("%c",&ch);

(ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? printf("Character is alphabet\n"): printf("Character is not alphabet\n"); 


}
