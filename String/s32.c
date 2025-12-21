// WAP in C to remove conjucutive spaces in string.
// i/p: s[20]=”abc coding sirji”
// o/p: abc coding sirji

#include<stdio.h>
#include<string.h>
void print_array(char *);
int remove_extra_space(char * str)
{
	int i,j;
	int len = strlen(str);
	for(i=0;str[i];i++)
	{
		if(str[i]==' ' && str[i+1]== ' ')
		{
			for(j=i;j<len-1;j++)
			{	
				str[j] = str[j+1];
			}
		str[j] ='\0';                    
		i--;
		}	
	
	
	}
		
	
}
void main()
{
	char s[20];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	remove_extra_space(s);
	
	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
