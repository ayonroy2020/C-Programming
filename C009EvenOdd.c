#include<stdio.h>

int main()
{
	int n, i,k=0;
	printf("Enter the range: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i<=n/2)
		{
			k = k+2;
			printf("%d\t",k);
			if(k==n)	k=-1;
		}
		else
		{
			k = k+2;
			printf("%d\t",k);
		}
	}
}
