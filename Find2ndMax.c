#include<stdio.h>
#include<stdlib.h>

#define size 5 

int main()
{
	int i, max=0, smax=0, min, d;
	int arr[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter array %d element:",i+1);
		scanf("%d",&arr[i]);
	}
	min = arr[0];
	for(i=0;i<size;i++)
	{
		if(max < arr[i])
		{
			smax=max;
			max = arr[i];
		}
		if(max==arr[0])
		{
			if(smax<arr[i] && arr[i]!=max)
				smax = arr[i];
		}
		
	/*	if(min > arr[i])
		{
			min = arr[i];
		}*/
	}
//	printf("\nMin value: %d", min);
	printf("\nSecond Max value: %d", smax);
	printf("\nMax value: %d", max);
	return 0;
}



/*
for(i=0;i<size;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
			if(i>0)
			{
				d = max - arr[i-1];
				printf("1st %d i=%d\n",d,i);
			}
			else
			{
				d = 0;
				printf("2nd %d i=%d\n",d,i);
			}
		}
		else if(arr[0]==max && max-arr[i]<d)
		{
			d = (max-arr[i]);
			printf("3rd %d i=%d\n",d,i);
			smax = max-d;
		}
		else
			smax = max - d;
	}
*/
