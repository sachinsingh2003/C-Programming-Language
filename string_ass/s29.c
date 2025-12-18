// WAP in C to count vowels in string using do-while .
// i/p: s[20]=”abc pqr aeio”
// o/p: vowels count= 5

#include<stdio.h>
void print_array(char *);
int count_vowels(char * str)
{
	char *p = str;
	int count=0;
	do{
		if((*p=='a') || (*p == 'e')||(*p=='i')||(*p=='o')||(*p=='u'))
			count++;
		p++;
	}
	while(*p);

	return count;	
}
void main()
{
	char s[20];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	int count = count_vowels(s);

	printf("Vowels Count = %d ",count);
//	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
