// WAP in C to delete first 3 char from string.
// i/p: char s[10]=”armstrong num”
// o/p: strong num

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
	int num;

	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	printf("Enter num of char to be deleted :\n");
	scanf("%d",&num);

	print_string(s);
	while(num)
	{	for(int i=0;s[i];i++)
		{
			s[i] = s[i+1];
		}
	num--;
	}
	print_string(s);

}
