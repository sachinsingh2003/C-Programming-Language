// WAP to sort a 2D string...

#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][10],temp[10];
		
	int ele,i,j;
	
	ele = sizeof(s)/sizeof(s[0]);

	printf("Enter the string :\n");
	for(i=0;i<ele;i++)
	scanf("%s",s[i]);

	printf("Array Before Sorting :\n");
	for(i=0;i<ele;i++)
	printf("%s ",s[i]);

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	printf("\n");
	printf("Array After Sorting :\n");
	for(i=0;i<ele;i++)
	printf("%s ",s[i]);
}
