// WAP in C to count -ve ,+ve, even , odd ele in array .
// i/p: int a[10]={-11,11,12,-12,9,8,-3,10,22};
// o/p: +ve = 6 , -ve = 3 , odd = 2 , even = 4

#include<stdio.h>
void counting(int *a,int n,int *pos,int *neg,int *odd,int *even)
{
	for(int i=0;i<n;i++)
	{
		if(*(a+i)>0)
			(*pos)++;
		else
			(*neg)++;

		if(*(a+i)%2==0)
			(*even)++;
		else
			(*odd)++;
	}
}
void main()
{
	int n,pos=0,neg=0,odd=0,even=0;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elements :\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Array : ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");

	counting(a,n,&pos,&neg,&odd,&even);

	printf("Positive : %d\n",pos);
	printf("Negative : %d\n",neg);
	printf("Even : %d\n",even);
	printf("Odd : %d\n",odd);
	printf("\n");

}
