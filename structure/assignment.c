/*
 WAP to perform following task using structure.
 1) allocate dynamic memory for n student’s data
 2) store data using run time input
 3) print the data based on requirement :
 a) design function to print rollno , name and marks of student whose rollno is even number.
 b) design function to print rollno and marks of student whose name’s first and last letter is vowel.
 c) design function to print mark of student whose names length pow of 2 number.
 d) design function to print name of student who got highest marks.
 e) design function to print rollno and name of student whose marks abr between 45 to 85.
 f) design function to print rollno , name and marks of student who failed (marks < 35) in exam
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stu
{
	int rollno;
	char name[20];
	float marks;
};
void memory_allocation(struct stu ***p, int n)
{
	*p = malloc(sizeof(struct stu *)*n);

	for(int i=0;i<n;i++)
	(*p)[i] = malloc(sizeof(struct stu));

}
void function1(struct stu **p,int n)
{
	printf("Student data as per your requirement :\n");
	printf("-----------------------------------------\n");
	for(int i=0;i<n;i++)
	{
		if((p[i]->rollno) % 2 ==0)
			printf("%d  %s  %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	}	
}

void function2(struct stu **p,int n)
{
	printf("Student data as per your requirement :\n");
	printf("-----------------------------------------\n");
	for(int i=0;i<n;i++)
	{
		char *name = p[i]->name ;
		int len  = strlen(name);

		char first = name[0];
		char last = name[len-1];
		
		if( (first=='A'||first=='E'||first=='I'||first=='O'||first=='U'|| first=='a'||first=='e'||first=='i'||first=='o'||first=='u') && (last=='A'||last=='E'||last=='I'||last=='O'||last=='U'|| last=='a'||last=='e'||last=='i'||last=='o'||last=='u') )	
			printf("%d  %s  %.2f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	}	
}


void function3(struct stu **p,int n)
{
	printf("Student data as per your requirement :\n");
	printf("-----------------------------------------\n");
	for(int i=0;i<n;i++)
	{
		char *name = p[i]->name ;
		int len  = strlen(name);
	
		if((len & (len-1))==0)
			printf("%d  %s  %.2f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	}
}

void function4(struct stu **p,int n)
{
	printf("Student data as per your requirement :\n");
	printf("-----------------------------------------\n");
	int h_marks = 0,t=0;
	for(int i=0;i<n;i++)
	{
		if(p[i]->marks > h_marks)
		{
			h_marks = p[i]->marks ;
			t = i;
		}
	}
	printf("%d  %s  %f\n",p[t]->rollno,p[t]->name,p[t]->marks);
}

void function5(struct stu **p,int n)
{
	printf("Student data as per your requirement :\n");
	printf("-----------------------------------------\n");

	for(int i=0;i<n;i++)
	{
		if(p[i]->marks > 45.0 && p[i]->marks < 85.0)
		{
			printf("%d  %s  %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
		}
	}
}

void function6(struct stu **p,int n)
{
	printf("Student data as per your requirement :\n");
	printf("-----------------------------------------\n");

	for(int i=0;i<n;i++)
	{
		if(p[i]->marks < 35.0)
		{
			printf("%d  %s  %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
		}
	}
}

void delete_record(struct stu ***p,int *n)
{
	for(int i=0;i<*n;i++)
	{
		if((*p)[i]->marks < 35.0)
		{
			free((*p)[i]);

			for(int j=i;j< *n-1;j++)
			(*p)[j] = (*p)[j+1];

		(*n)--;
		
		*p = realloc(*p,(*n)*sizeof(struct stu *));
		}
	}
}
void new_record(struct stu ***p,int *n)
{
	int m;
	printf("Enter the number of record u want to add:\n");
	scanf("%d",&m);
	m += *n ;
	
	*p = realloc(*p, m*( sizeof(struct stu *)));
	
	if(*p==NULL)
	{
		printf("Not Enough Memory ------- Memory Not Allocated\n");
		break;
	}

	for(int i=*n;i<m;i++)
	(*p)[i] = malloc(sizeof(struct stu));

//	printf("Enter rollno, name and marks you want to add \n");
	for(int i=*n;i<m;i++)
	{	
		printf("Enter rollno, name and marks of %d student\n",i+1);
		scanf("%d%s%f",&(*p)[i]->rollno,(*p)[i]->name,&(*p)[i]->marks);
	}
	*n = m;
}
void update_record(struct stu ***p, int n)
{
	int choice;
	printf("-------------------------------------------------\n");
	printf("1. Roll Number\n2. Name \n3. Marks\n");
	printf("Enter the choice according to which you want to update the data\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 : 
			int roll;
			printf("------------------------------------------------------\n");
			printf("Enter the rollno of student you want to update data:\n");
			scanf("%d",&roll);	
		
			for(int i=0;i<n;i++)
			{
				if((*p)[i]->rollno == roll)
				{
					printf("Enter new details of student whose rollno is %d\n",roll);
					scanf("%d%s%f",&(*p)[i]->rollno,(*p)[i]->name,&(*p)[i]->marks);
				}
				else
				{
					printf("SORRY!------Rollno not found\n ");	
				}
			}
		break;	
		
		case 2 : 
			char naam[20];
			printf("------------------------------------------------------\n");
			printf("Enter the name of student you want to update data:\n");
			scanf("%s",naam);	
		
			for(int i=0;i<n;i++)
			{
				if(strcmp((*p)[i]->name,naam )==0)
				{
					printf("Enter new details of student whose name is %s\n",naam);
					scanf("%d%s%f",&(*p)[i]->rollno,(*p)[i]->name,&(*p)[i]->marks);
				}
				else
				{
					printf("SORRY!------Name not found\n ");	
				}
			
			}
		break;
		
		case 3 : 
			float marks;
			printf("------------------------------------------------------\n");
			printf("Enter the marks of student you want to update data:\n");
			scanf("%f",&marks);	
		
			for(int i=0;i<n;i++)
			{
				if((*p)[i]->marks == marks)
				{
					printf("Enter new details of student whose marks is %.2f\n",marks);
					scanf("%d%s%f",&(*p)[i]->rollno,(*p)[i]->name,&(*p)[i]->marks);
				}		
				else
				{
					printf("SORRY!------Marks not found\n ");	
				}
			
			}
		break;
	
		default : printf("ERROR!! 404 -----Wrong Choice----\n");
	}
}

void main()
{
	int n;
	printf("Enter the number of student: ");
	scanf("%d",&n);

	struct stu **p;
	memory_allocation(&p,n);

	for(int i=0;i<n;i++)
	{
		printf("Enter rollno, name and marks of %d student\n",i+1);
		scanf("%d%s%f",&p[i]->rollno,p[i]->name,&p[i]->marks);
	}
	
	printf("-------------------Original Record------------------------------------\n");
	
	for(int i=0;i<n;i++)
		printf("%d   %s   %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	
	printf("-------------------------------------------------------------\n");	
	
	int choice;
	
	printf("1. Printf data whose rollno. is even. \n2. Print data whose name’s first and last letter is vowel. \n3. Print data whose names length pow of 2 number. \n4. Print data who got highest marks. \n5. Print data whose marks abr between 45 to 85. \n6. Print data who failed (marks < 35) in exam.\n7. Delete a Student record\n8. Enter a new studnt data\n9. Update student data\n ");
	
	printf("Enter the number according to which u want to perform task:   ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			function1(p,n);            // task 1            	
			break;
		case 2:
			function2(p,n);            // task 2
			break;
		case 3:
			function3(p,n);           // tasl 3
			break;
		case 4:
			function4(p,n);            // task 4   	
			break;
		case 5:
			function5(p,n);           // task 5
			break;
		case 6:
			function6(p,n);           // task 6
			break;
		case 7:
			delete_record(&p,&n);      // task 7
			printf("----------Record After Deletion----------\n");
			for(int i=0;i<n;i++)
				printf("%d    %s    %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
		
			break;
		case 8:
			new_record(&p,&n);         // task 8

			printf("--------------New Record ------------\n");
			for(int i=0;i<n;i++)
				printf("%d    %s    %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
		
			break;
		case 9:
			update_record(&p,n);         // task 9
			printf("-------------- New Updated Record-------------\n");
			for(int i=0;i<n;i++)
				printf("%d    %s    %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
		
			break;
		default : printf("ERROR!! 404----Wrong Choice-----\n");

		}


}
