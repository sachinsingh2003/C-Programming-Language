// WAP in C to replace one word with another word in string [word lenght -> same or diffrent]
// i/p: char s[30]=”pf123 pf78 pf”,
// s1[10]=”pf”,s2[10]=’printf’ ;
// o/p: char s[20]=”printf123 printf78 printf”;

#include<stdio.h>
#include<string.h>
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
	int shift = strlen(replace)- strlen(find);
//	printf("shift= %d",shift);
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
			char *lst = str;
			while(*lst != '\0')
				 lst++;
		//	lst--;
		//	printf("lst = %c\n",*lst);	
			while(lst >= start)
			{
				*(lst+shift) = *lst ;
				lst--;
			}	
		//	printf("string = %s\n",str);
			while(*r !='\0')
			{	
				*p++ = *r++;
			}
			p = p+0;		
		}
		else
        		p++;
    	}

}
void main()
{
	char s[40],find[10],replace[10];
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
