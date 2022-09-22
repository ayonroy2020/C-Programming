/*
	s = x + x^2/2! + x^3/3! + .... + x^n/n!
*/
#include<stdio.h>
#include<math.h>

int fact(int i);

int main()
{
	int n, i, x;
	float s=0, k, f, d; 
	printf("Enter value of n and x: ");
	scanf("%d%d",&n,&x);
	i=1;
	
	
	while(i!=n)
	{
		k = pow(x,i);
		f = fact(i);
		d = k/f;
		s = s + d;
		i++;
	}
	printf("\nFinal value: %f",s);
}

int fact(int i)
{
	int f = 1;
	while(i>0)
	{
		f = f * i;
		i--;
	}
	return f;
}
