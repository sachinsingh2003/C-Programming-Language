// WAP to scan and print a string....

#include<stdio.h>
void main()
{
	char str[5][10];
	int ele;
	
	ele = sizeof(str)/sizeof(str[0]);

	printf("Enter the string :\n");
	for(int i=0;i<ele;i++)
		scanf("%s",str[i]);


	printf("String :\n");
	for(int i=0;i<ele;i++)
		printf("%s ",str[i]);


}
