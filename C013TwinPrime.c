/*
	Twin Prime  2,3  3,5  5,7  11,13  17,19  29,31 .... upto N.
*/
#include<stdio.h>

int main()
{
	int n, i, flag, k=1, j;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	for(j=1;j<=n;j++)
	{
		flag = 0;
		if(j==1)	continue;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
				flag++;
		}
		if(flag==0)
		{
		//	printf("(j=%d),k=%d",j,k);
			if((j-k)==2)
				printf("%d,%d ",k,j);
			k = j;
		}
	}
}
