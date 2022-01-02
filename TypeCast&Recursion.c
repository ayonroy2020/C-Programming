/***
	Type casting:- It helps to restore/save the memory. Using same pointer we can store different variabe address.
	
	Static variable initialization:- It initialization the variable with 0 value and if we declare an int variable in a function, then 
	that variable is a local variable for that function which gets destroyed as the function ends. But if we declare an int variable in
	a function also as static, then that variable will not get destroyed as the function ends and will not get destroyed until the program ends. 
	
***/
#include<stdio.h>
#include<stdlib.h>

int sum (int);

int main()
{
	void *pt;
	int n ,a = 10;
	double b=20.5;
	
	printf("------------Type Casting Concept---------\n");
	pt = &a;
	printf("%d\n",*(int *)pt);
	pt = &b;
	printf("%lf\n",*(double *)pt);
	
	printf("\n-----------Concept of Static Variable---------\n");
	
	printf("Enter range for sum: ");
	scanf("%d",&n);
	printf("\nSum : %d",sum(n));
	return 0;
}

int sum(int a)
{
	static int s;// Static variable initialized with 0 and it check only one time.
	
	if(a==0)
		return s;
	else
	{
		s = s+a;
		return (sum(a-1));
	}
}


