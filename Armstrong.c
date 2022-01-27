#include<stdio.h>
#include<math.h>

int main()
{
	int n, temp, n2, l=0, sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp = n;
	n2 = n;
	
	while(n!=0)
	{
		n = n/10;
		l++;
	}
//	l = strlen(n);
	while(n2!=0)
	{
		sum = sum + pow((n2%10),l);
		n2 = n2/10;
	}

	if(temp == sum)
		printf("It is an Armstrong number.");
	else
		printf("It is not an Armstrong number.");
	
	return 0;
}
