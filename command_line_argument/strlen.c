// WAP to calculate the length of string using command line argument

#include<stdio.h>
#include<string.h>
void main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("Wrong input \n");
		return;
	}
	
	int len = strlen(argv[1]);
	printf("len =%d\n",len);
}
