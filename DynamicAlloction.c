/***
Dynamic Memory Allocation:- 
	1) calloc()
	2) malloc()
	
	Calloc():- Contiguous memory alloction, it is an inbuilt function in c that helps to allocate dynamic array at runtime.
	Syntax :- (void *)calloc(n,sizeof(data type)).
	Malloc():- ... It helps to allocate dynamic structure at runtime.
	Syntax :- (void *)malloc(sizeof(data type)).	
***/

#include<stdio.h>
#include<stdlib.h>

struct st{
	int roll, marks;
	char name[31];
}*stud[5];

int main()
{
	int *pt, n, i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	//for calloc you must use /***(stdlib.h)***/ librery function.
	pt = (int*)calloc(n,sizeof(int));
	printf("\n\n-------------Calloc Input-------------");
	for(i=0;i<n;i++)
	{
		printf("\nEnter a[%d] array element : ",i+1);
		scanf("%d",pt+i);
	}
	printf("\n-------------Output Calloc-------------");
	for(i=0;i<n;i++)
	{
		printf("\na[%d] array element is : %d",(i+1),*(pt+i));
	}
	
	printf("\n\n-------------Malloc Input-------------");

	for(i=0; i<n; i++)
	{
		stud[i] = (struct st*)malloc(sizeof(struct st));
		printf("\nEnter the Roll: ");
		scanf("%d",&stud[i]->roll);
		printf("\nEnter the Mark: ");
		scanf("%d",&stud[i]->marks);
		fflush(stdin);
		printf("\nEnter the Name: ");
		gets(stud[i]->name);
	}
	
	printf("\n-------------Malloc Output-------------\n");
	for(i=0; i<n; i++)
	{
		printf("Roll: %d\n",stud[i]->roll);
		printf("Mark: %d\n",stud[i]->marks);
		printf("Name: %s\n",stud[i]->name);
	}
	
	return 0;
}
