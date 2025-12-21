// WAP in C to delete palindrome word from string.
// i/p: char s[20]=”laxmi madam vector ”
// o/p: char s[20]=”laxmi vector ”

#include<stdio.h>
void print_string(char * str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");
}
int pallindrome(char * str)
{
         char *p = str;
         char *q = str;
         while(*q !=' ' && *q !='\0')
                 q++;
         q--;
         while(p<q)
         {
                 if(*p++ != *q--)
                  {
                          return 0;
                          break;
                 }
         }
	return 1;
 
}
void delete_pallindrome(char *str)
{
	char *p = str;
    	char *q ;

    	while (*p)
    	{
		q = p;
        	while(*q !='\0' && *q !=' ')
			q++;

		if(pallindrome(p))
		{
			char *r = q;
			if(*r == ' ')
				r++;
			
			while(*r !='\0')
			{	
				*p++ = *r++;
			}
			*p = '\0';
			p =  str;
		}
		else
		{
			if(*q==' ')
				q++;
			p = q;
		}
    	}

}
void main()
{
	char s[30];
	printf("Enter the string :\n");
	scanf("%[^\n]",s);

	print_string(s);
	
	delete_pallindrome(s);
	
	print_string(s);
}
