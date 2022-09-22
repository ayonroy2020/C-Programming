#include<stdio.h>

int main()
{
	int n, s=0, temp, r;
	printf("Enter value of n: ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		r = n%10;
		s = r + (10*s);
		n = n/10;
	}
	
	if(temp==s)
		printf("%d is palindram.",temp);
	else
		printf("%d not palindram.",temp);
}
