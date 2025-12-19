// Write a program to search a record in an array of structures

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	int rollno;
	char name[20];
	int id;
};
struct stu * search_roll(struct stu **p,int number ,int roll_num)
{
	for(int i=0;i<number;i++)
	{
		if(p[i]->rollno == roll_num)
		return p[i];
	}
	return 0;
}
struct stu * search_name(struct stu **p,int number,char *str)
{
	for(int i=0;i<number;i++)
	{
		if(strcmp(p[i]->name,str)==0)
		return p[i];
	}
	return 0;
}
struct stu * search_id(struct stu **p,int number,int id)
{
	for(int i=0;i<number;i++)
	{
		if(p[i]->id==id)
		return p[i];
	}
	return 0;
}

void main()
{
	int n;
	printf("Enter the number of student :\n");
	scanf("%d",&n);

	struct stu **p;
	p = malloc(sizeof(struct stu *)*n);

	for(int i=0;i<n;i++)
	p[i] = malloc(sizeof(struct stu));

	for(int i=0;i<n;i++)
	{
		printf("Enter rollno , name and id of %d student\n",i);
		scanf("%d%s%d",&p[i]->rollno,p[i]->name,&p[i]->id);
	}

	int choice;
	printf("Enter the choice by which you want to search tha data....\n");
	printf("1. Roll No.\n2. Name\n3. ID\n");
	scanf("%d",&choice);

	if(choice==1)
	{
		int num;
		printf("Enter the roll number you want to search: ");
		scanf("%d",&num);

		struct stu *temp;
		temp = search_roll(p,n,num);
		if(temp == 0)
		{
			printf("ERROR : 404 -------Rollno not found\n");
		}
		else
		{
			printf("%d  %s  %d\n",temp->rollno,temp->name,temp->id);
		}
			
	}
	if(choice==2)
	{
		char naam[20];
		printf("Enter the name you want to search..  :");
		scanf("%s",naam);
	
		struct stu *temp2;
		temp2 = search_name(p,n,naam);
		if(temp2==0)
		{
			printf("ERROR : 404 -------Name not found\n");
		}
		else
		{
			printf("%d  %s  %d\n",temp2->rollno,temp2->name,temp2->id);
		}
	}
	
	if(choice==3)
	{
		int iddd;
		printf("Enter the id you want to search.. : ");
		scanf("%d",iddd);
		
		struct stu *temp3;
		temp3 = search_id(p,n,iddd);
		if(temp3==0)
		{
			printf("ERROR : 404---------------- ID not found\n")
		}
		else
		{
			printf("%d  %s  %d\n",temp3->rollno,temp3->name,temp3->id);
		}
	}
	else
		printf("Worong Choice !!!-------------------------TRY AGAIN!\n");
	
}
