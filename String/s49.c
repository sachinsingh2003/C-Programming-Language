// WAP in C to replace one word with another word
// i/p: char s[20]=”ab123 ab78”,
// s1[10]=”ab”,s2[10]=’cs’
// o/p: char s[20]=”cs123 cs78”

#include<stdio.h>
void print_string(char * str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");
}
void replace_word(char *str,char *find,char *replace)
{
	char *p = str;
    	char *q;
	char *r;

    	while (*p)
    	{
        	q = find;
        	char *start = p;
		char *r = replace;

        	while (*start != '\0' && *q != '\0')
       	 	{
            		if (*start != *q)
                	break;

            		start++;
            		q++;
        	}

        	if (*q == '\0')
            	{
			while(*r !='\0')
			{	
				*p++ = *r++;
			}

			p = str;		
		}
		else
        		p++;
    	}

}
void main()
{
	char s[30],find[10],replace[10];
	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	printf("Enter the word to find :\n");
	scanf("%s",find);

	printf("Enter the word to replace :\n");
	scanf("%s",replace);

	print_string(s);
	
	replace_word(s,find,replace);
	
	print_string(s);
}
