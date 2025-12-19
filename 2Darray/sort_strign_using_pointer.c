//WAP to sort a 2D string using pointer....

#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][10],*temp,*p[5];
	int ele,i,j;
	
	ele = sizeof(s)/sizeof(s[0]);

	for(i=0;i<ele;i++)
		p[i]= s[i];

	printf("Enter the string :\n");
	for(i=0;i<ele;i++)
		scanf("%s",s[i]);

	printf("\nBefore sorting :\n");
	for(i=0;i<ele;i++)
		printf("%s ",s[i]);

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				temp = p[j];
				p[j]= p[j+1];
				p[j+1] = temp;
			}
		}
	}
	
	printf("\nAfter Sorting :\n");
	for(i=0;i<ele;i++)
		printf("%s ",p[i]);
}

