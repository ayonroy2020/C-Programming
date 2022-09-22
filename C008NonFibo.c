#include<stdio.h>

int main()
{
	int i, n, f0, f1, f2, k=1;
	
	f0 = 0; f1 = 1;
	printf("Enter range: ");
	scanf("%d",&n);
	
	printf("Non Fibonoci Series is: ");
	for(i=1;i<=n;i++)
	{
		f2 = f0+f1;
		if(k!=f2)
			printf("%d, ",k);
		else
		{
			f0 = f1;
			f1 = f2;
		}
		k++;	
	}
	printf("\b\b ");
}
