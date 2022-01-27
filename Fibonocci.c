#include<stdio.h>

int main()
{
	int f1=0, f2=1, f3, n, i;
	printf("Enter length fibo series: ");
	scanf("%d",&n);
	
	printf("Fibonocci series: ");
	for(i=0; i<n; i++)
	{
		if(i <= 1)
			f3 = i;
		else
		{
			f3 = f1+f2;
			f1=f2;
			f2=f3;
		}
		printf("%d\t",f3);
	}
	return 0;
}
/*
Using recursion

int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 
*/
