// WAP in C to sort the string in ascending order using while loop only .
// i/p: char s[10]= ”Aa1Bb2Cc3”;
// o/p: 123ABCabc

#include<stdio.h>
void print_array(char *);
void sort(char * str)
{

	char *src = str;

	char *lst = str;

	while(*lst)
		lst++;
	lst--;                      // last element of string
	
	while(src <= lst)
	{
		char *des = str;
	
		while(des < lst-(src-str))
		{
			if(*des > *(des+1))
			{
				char temp = *des;
				*des = *(des+1);
				*(des +1) = temp;
			}
		des++;
		}
	src++;
	}		
}
void main()
{
	char s[20];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	sort(s);

	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
