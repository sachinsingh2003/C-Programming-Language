//  Print Binary of any number:-

#include<stdio.h>

void main(){

	int num,pos;
	printf("Enter 1 byte number:-\n");
	scanf("%d",&num);

//	printf("Enter bit position:-\n");
//	scanf("%d",&pos);
	
	for (int i=7 ; i>=0 ; i=i-1){
	
		printf("%d",num >> i & 1);
	}	
	

/*	pos= 7;
	printf("%d",num >> pos & 1);

	pos= pos-1 ;
	printf("%d",num >> pos & 1);

	pos= pos-1;
	printf("%d",num >> pos & 1);
	
	pos= pos-1;
	printf("%d",num >> pos & 1);

	pos= pos-1;
	printf("%d",num >> pos & 1);
	
	pos= pos-1;
	printf("%d",num >> pos & 1);
	
	pos= pos-1 ;
	printf("%d",num >> pos & 1);
	
	pos= pos-1;
	printf("%d",num >> pos & 1);
*/
	printf("\n");

}
