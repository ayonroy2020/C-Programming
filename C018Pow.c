/*
	pow without using library function
*/
#include<stdio.h>

int main()
{
	int p, n, ans=1;
	printf("Enter value of number and power: ");
	scanf("%d%d",&n,&p);
	
	while(p>0)
	{
		ans = ans*n;
		p--;
	}
	printf("Output: %d",ans);
}
