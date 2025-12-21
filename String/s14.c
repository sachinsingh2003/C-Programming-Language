// WAP in C to delete 0th index char from string.
// i/p: char s[20]=”coding sirji”;
// o/p: oding sirji

#include<stdio.h>
void print_string(const char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");
}
void main()
{
	char s[30];
	int index;

	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	printf("Enter the index to be deleted :\n");
	scanf("%d",&index);

	print_string(s);
	for(int i=index;s[i];i++)
	{
		s[i] = s[i+1];
	}

	print_string(s);

}
