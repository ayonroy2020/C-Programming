#include <stdio.h>
#include <stdlib.h>
int is_prime(int m)
{
    int i;
    for(i=2; i<=m/2; i++)
    {
        if (m % i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
	int arr[5]={4, 5, 6, 7, 11};
	int i, max, min;

	min=INT_MAX;
	max=INT_MIN;
	
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
		if(arr[i]==0 || arr[i]==1) continue;
		
		if(is_prime(arr[i]))
		{
			if (arr[i]<min)
				min = arr[i];
			if (arr[i]>max)
				max = arr[i];
		}
		
	}
	printf("\nMax: %d",max);
	printf("\nMin: %d",min);
	printf("\nSum: %d",(max+min));
	return 0;
}

