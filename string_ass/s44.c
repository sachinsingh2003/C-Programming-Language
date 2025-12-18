// WAP in C to check substring is present in a main string or not using nested while loop.
// i/p: char m[20]=”123 abc”, s[10]=”abc”;
// o/p: yes

#include<stdio.h>
void print_string(char * str)
{
	printf("String :");
	printf("%s",str);
	printf("\n");
}
int check_substring(char *str,char *sub)
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
            	return 1;

        	p++;
    	}

    	return 0;

}
void main()
{
	char s[30],sub[10];
	printf("Enter the string :\n");
	scanf("%[^\n]",s);
	
	printf("Enter the substring:\n");
	scanf("%s",sub);

	print_string(s);
	
	int result = check_substring(s,sub);
	
	if(result)
		printf("YES");
	else
		printf("NO");

}
