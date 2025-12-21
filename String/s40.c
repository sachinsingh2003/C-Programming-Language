// WAP in C to count each char in string .
// i/p: char s[20]=”1213ac1c”;
// o/p: 1 --> 3 , 2--> 1,3-->1 ,a-->1 ,c-->2

#include<stdio.h>
#include<string.h>
void print_array(char *);
void count_each_char(char * str)
{
	int i,j,count=1;
	int visited[256]={0};
	for(i=0;str[i];i++)
	{
		if(visited[(unsigned char)str[i]])
			continue;
		count=1;
		for(j=i+1;str[j];j++)
		{
			if(str[i]==str[j])
			{
				count++;
			
			}
		}

	printf("%c---> %d\n",str[i],count);
	visited[(unsigned char)str[i]]=1;
	}		
	
}
void main()
{
	char s[30];

	printf("Enter the string : \n");
	scanf("%[^\n]",s);
	
	print_array(s);
	
	count_each_char(s);
	
//	print_array(s);
}
void print_array(char *str)
{
	printf("String : ");
	printf("%s",str);
	printf("\n");

}
