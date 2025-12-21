// WAP in C to print word ending with letter ‘g’.
// i/p: char s[20]=”c ds coding doing”;
// o/p: coding doing

#include<stdio.h>
#include<string.h>
void print_string(const char *);

void word_ending_with_g(char *str)
{
	int start=0,i=0;
//	while(str[i] != '\0')
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]==' ' || str[i+1] =='\0')
		{
			int end = (str[i]==' ') ? i-1 : i;
			if(str[end] =='g')
			{
				for(int j=start; j<=end;j++)
				{	
					printf("%c",str[j]);		
				}
			printf("\n");
			}
		start= i+1;
		}
	}	


}
void main()
{
	char s[20];
	
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	word_ending_with_g(s);
	
	
}
void print_string(const char *str)
{
	printf("Input :");
	printf("%s",str);
	printf("\n");

}	

