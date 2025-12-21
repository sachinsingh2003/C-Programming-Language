// WAP in C to find smallest words in string.
// i/p: char s[20]=”123 vector c ds”;
// o/p: c

#include<stdio.h>
void print_array(char *);
void smallest_word(char *str)
{
	int min=0,len=0;
	char *a=NULL,*b=NULL;
	char *p = str;
	char *r = str;
		
	
	while(*p !=' ')
	{	
		min++;
		p++;
	}

//	printf("minimum = %d",min);

	p = str;
	while(*r)
	{
		if(*r==' ')
		{
			len = r - p;
			if(len<min)
			{	
				min = len;
				a = p;
				b = r;
			}
			p = r+1;
		}
	r++;
	
	}

 	len = r - p;
    	if (len < min)
    	{
        	min = len;
        	a = p;
        	b = r;
    	}
	printf("Smallest word : ");
	while(a<b)
	{
		printf("%c\n",*a++);
	}
	printf("\n");	
}
void main()
{
	char s[30];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	smallest_word(s);

//	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
