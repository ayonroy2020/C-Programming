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

int main()
{
	int *pt, n, i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	//for calloc you must use /***(stdlib.h)***/ librery function.
	pt = (int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter a[%d] array element : ",i+1);
		scanf("%d",pt+i);
	}
	printf("\n-------------Output-------------");
	for(i=0;i<n;i++)
	{
		printf("\na[%d] array element is : %d",(i+1),*(pt+i));
	}
	return 0;
}
