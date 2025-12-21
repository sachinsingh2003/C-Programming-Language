// WAP to allocate dynamic memory for n string then scan and print.....

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter the number of string:\n");
	scanf("%d",&n);

	char **p;
	p = malloc(sizeof(char *)*n);

	for(int i=0;i<n;i++)
	p[i] = malloc(sizeof(char)*20);

	printf("Enter string....\n");
	for(int i=0;i<n;i++)
		scanf("%s",p[i]);
	printf("-------------------------\n");
	for(int i=0;i<n;i++)
		printf("%s ",p[i]);
}
