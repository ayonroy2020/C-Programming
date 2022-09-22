#include<stdio.h>

int main()
{
	int i, s=1, n, fsum=0;
	printf("Enter the range: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		s = s+i;
		fsum = fsum+s;
		printf("%d + ",s);
	}
	printf("\nFinal Sum: %d",fsum);
}
