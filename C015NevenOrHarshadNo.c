/*
	63 = 6 + 3 = 9 || 63/9 == 0 
*/

#include<stdio.h>

int main()
{
	int n, temp, r, s=0;
	printf("Enter any no: ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		r = n%10;
		s = s+r;
		n = n/10;
	}
	if(temp%s==0)	printf("%d is a Niven or Harshad no.",temp);
	else	printf("%d is not a Niven or Harshad no.",temp);
}
