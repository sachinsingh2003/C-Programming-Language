// WAP in C to reverse word lenght > 4 in string.
// i/p: char s[20]=“ias abcde mkdir ”;
// o/p:char s[20=] “ias edcba irdkm ”;

#include<stdio.h>
void print_string(char *);
void reverse(char *src,char *des)
{
	char *p = src;
	char *q = des;
	while(p<q)
	{	
		char temp = *p;
		*p = *q;
		*q = temp;
		
		p++;
		q--;
	}
}
void len(char *str)
{
	char *p = str;
	char *q = str;
	char *r = str;
	int count=0;

	while(*p)
	{
		r = p;
		while(*p != ' ' && *p != '\0')
		{
			count++;
			p++;
		}
//		printf("count =%d\n",count);
//		printf("*p value = %c\n",*(p-1));
		if(count>3)
		{
			 q = p-1;
//			printf("q =%c\n",*q);
//			printf("r =%c\n",*r);
			
			reverse(r,q);
			
//			r = p+1;
		}
		count=0;
	p++;
	}

}
void main()
{
	char s[30];
	
	printf("Enter the string: ");
	scanf("%[^\n]",s);

	print_string(s);
	len(s);
	print_string(s);


}
void print_string(char *str)
{
	printf("String: ");
	printf("%s",str);
	printf("\n");
}
