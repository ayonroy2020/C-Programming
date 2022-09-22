/*
	HCF LCM
*/
#include<stdio.h>

int main()
{
	int a, b, lcm, rem;
	printf("Enter 2 no a and b: ");
	scanf("%d%d",&a,&b);
	lcm = a*b;
	
	if(a>b)					//???
	{
		while(b!=0)
		{
			rem = a%b;
			a = b;
			b = rem;
		}
		printf("HCF: %d \tLCF: %d",a,(lcm/a));
	}
}
