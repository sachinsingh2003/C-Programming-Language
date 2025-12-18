1// WAP in C to merge 2 string to another string.
// i/p: s1[10]=”12” s2[10]=”ABCD”
// o/p : s3[20]=”1A2BCD”

#include<stdio.h>
void print_array(char *);
void merge_string(char *s1,char *s2,char *des)
{
	char *p=s1;
	char *q=s2;
	char *r=des;
	
	while(*p && *q)
	{
		*r++ = *p++;
		*r++ = *q++;
	}

	while(*p)
		*r++ = *p++;

	while(*q)
		*r++ = *q++;

	*r = '\0';
}
void main()
{
	char s1[20],s2[20],d[30];

	printf("Enter the string : \n");
	scanf("%[^\n] %[^\n]",s1,s2);
	
//	print_array(s);
	
	merge_string(s1,s2,d);

	print_array(d);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
