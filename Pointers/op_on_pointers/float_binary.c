// WAP to print the binary format of a float using char pointer.....

#include<stdio.h>
void main()
{
	float f;
	printf("Enter the float number:\n");
	scanf("%f",&f);
	char *p;

	for(p =(char *)&f,p=p+3;p>=(char *)&f;p--)
	{
		for(int pos=7;pos>=0;pos--)
		{
			printf("%d",*p>>pos&1);
			if(pos%8==0)
				printf(" ");
		}
	}
	printf("\n");
}
