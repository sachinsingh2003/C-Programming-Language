// WAP in C to find largest words in string.
// i/p: char s[20]=”123 vector c ds”;
// o/p: vector

#include<stdio.h>
void print_array(char *);
void largest_word(char *str)
{
	int max=0,len=0;
	char *a=NULL,*b=NULL;
	char *p = str;
	char *r = str;
	
	while(*r)
	{
		if(*r==' ')
		{
			len = r - p;
			if(len>max)
			{	
				max = len;
				a = p;
				b = r;
			}
			p = r+1;
		}
	r++;
	
	}

 	len = r - p;
    	if (len > max)
    	{
        	max = len;
        	a = p;
        	b = r;
    	}
	while(a<b)
	{
		printf("%c",*a++);
	}
	//printf("max len = %d",max);	
}
void main()
{
	char s[30];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	largest_word(s);

//	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
