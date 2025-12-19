//  WAP to print alternate odd number between 21 to 39

#include<stdio.h>
void main()
{
	int i,count=0;
	for(i=21 ; i<=39 ;i++)
	{
		if(i%2 !=0)
		{	
		//	printf(" %d ",i);
			count++;
		
		if(count%2 ==0)
			printf(" %d ",i);
		}
	}
	
		

}
