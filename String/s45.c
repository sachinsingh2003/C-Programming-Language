// WAP in C to count substring in main string .
// i/p: char m[20]=”abcd cd 12cd”, s[5]=”cd”
// o/p: count = 3 times

#include<stdio.h>
void print_string(char * str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");
}
int count_substring(char *str,char *sub)
{
	char *p = str;
    	char *q;
	int count=0;
	
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
			count++;
		}

        	p++;
    	}

    	return count;

}
void main()
{
	char s[30],sub[10];
	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	printf("Enter the substring:\n");
	scanf("%s",sub);

	print_string(s);
	
	printf("Count = %d \n",count_substring(s,sub));
	

}
