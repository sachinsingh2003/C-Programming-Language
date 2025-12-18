// WAP in C to check string lenght is strong or not.
// i/p: char s[10]= ”vector”;
// o/p: yes 6 is strong number

#include<stdio.h>
void main()
{
	char s[30];
	
	printf("Enter the string \n");
	scanf("%s",s);
	int len;
	for(len=0;s[len];len++);

	int num = len;
	int sum=0;
	while(num)
	{
		int r = num%10;
		num = num/10;
		int j=1,fact=1;
		while(j<=r)
		{
			fact = fact * j;
			j++;
		}
		sum = sum + fact;
	}
		
	if(sum==len)
		printf("%d is Strong Number",len);
	else
		printf("%d is Not Strong",len);

}
