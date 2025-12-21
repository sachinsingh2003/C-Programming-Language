// WAP in C delete substring from main string .
// i/p: char m[20]=”abc45 78abc”,s[10]=”abc”;
// o/p: char m[20]=”45 78”

#include<stdio.h>
void print_string(char * str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");
}
void delete_substring(char *str,char *sub)
{
	char *p = str;
    	char *q;

    	while (*p)
    	{
        	q = sub;
        	char *start = p;

        	while (*start != '\0' && *q != '\0')
       	 	{
            		if (*start != *q)
                	break;

            		start++;
            		q++;
        	}

        	if (*q == '\0')
            	{
			while(*start != '\0')
			{	
				*p++ = *start++;
			}
			*p = '\0';
			p = str;	
		}
        	p++;
    	}

}
void main()
{
	char s[30],sub[10];
	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	printf("Enter the substring:\n");
	scanf("%s",sub);

	print_string(s);
	
	delete_substring(s,sub);
	
	print_string(s);
}
