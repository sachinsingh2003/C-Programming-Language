// -----------------Array Of Structure-------------------
// WAP to scanf data of n student and then give user option to sort data according to rollno , name and marks......
#include<stdio.h>
#include<string.h>
struct stu
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	int n;
	printf("Enter the number of student\n");
	scanf("%d",&n);

	struct stu v[n],t;

	for(int i=0;i<n;i++)
	{
		printf("Enter data of %d student\n",i);
		scanf("%d%s%f",&v[i].rollno,v[i].name,&v[i].marks);	
	}
	
	for(int i=0;i<n;i++)
	{
	//	printf("Enter data of %d student\n",i);
		printf("%d   %s   %f",v[i].rollno,v[i].name,v[i].marks);
		printf("\n");
	
	}
	
	printf("Enter the choice by which u want to perform sorting:\n");
	printf("1. rollno     2. name   3. marks\n");
	int choice;
	scanf("%d",&choice);

	if(choice==1)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(v[j].rollno > v[j+1].rollno)
				{
					t = v[j];
					v[j] = v[j+1];
					v[j+1] = t;
				}
			}
		}
		
	
	}
	else if(choice==2)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if((strcmp(v[j].name,v[j+1].name)>0))
				{
					t = v[j];
					v[j] = v[j+1];
					v[j+1] = t;
				}
			}
		}
	}

	else if(choice==3)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(v[j].marks > v[j+1].marks)
				{
					t = v[j];
					v[j] = v[j+1];
					v[j+1] = t;
				}
			}
		}
	}


	printf(".............Data After sorting......\n");
	for(int i=0;i<n;i++)
	{
		printf("%d   %s   %f",v[i].rollno,v[i].name,v[i].marks);
		printf("\n");

	}
}

