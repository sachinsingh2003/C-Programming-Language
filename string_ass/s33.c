// WAP in C to delete duplicate char from string.
// i/p: s[20]=”abc abc ppp 122”
// o/p : abc p12

#include<stdio.h>
#include<string.h>
void print_array(char *);
void delete_duplicate_char(char * str)
{

	int len = strlen(str);
	int i,j,k;
	for(i=0;i<str[i];i++)
	{
		for(j=i+1;j<str[j];)
		{
			if(str[i]==str[j])
			{	
				for(k=j;k<str[k];k++)
				{	
					str[k] = str[k+1];
				}
			//len--;
			str[k]= '\0';
			}
			else
				j++;
		}
	}			
}
void main()
{
	char s[20];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	delete_duplicate_char(s);
	
	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
