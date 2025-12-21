// WAP in C to count duplicate char from string.
// i/p: s[20]=”aaababcdeb”
// o/p: a-->4 times b-->3 times

#include<stdio.h>
#include<string.h>
void print_array(char *);
void count_duplicate_char(char * str)
{
	int i,j,count=1;
//	int visited[256]={0};
	for(i=0;str[i];i++)
	{
//		if(visited[(unsigned char)str[i]])
		if(str[i]==-1)
			continue;
		count=1;
		for(j=i+1;str[j];j++)
		{
			if(str[i]==str[j])
			{
				count++;
				str[j] = -1;
			}
		}
	if(count>1)
		printf("%c---> %d\n",str[i],count);
		visited[(unsigned char)str[i]] =1;
	}		
	
}
void main()
{
	char s[20];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	count_duplicate_char(s);
	
//	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
