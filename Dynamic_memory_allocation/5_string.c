// WAP to allocate dynamic memory for 5 string then scan and print.....

#include<stdio.h>
#include<stdlib.h>
void main()
{
	char *p[5];
	
	for(int i=0;i<5;i++)
	p[i] = malloc(sizeof(char)*20);

	printf("Enter 5 string....\n");
	for(int i=0;i<5;i++)
		scanf("%s",p[i]);
	printf("-------------------------\n");
	for(int i=0;i<5;i++)
		printf("%s\n",p[i]);
}
