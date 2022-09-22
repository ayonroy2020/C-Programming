/*
	5^2 = 25 , 5 and 5 match || (25)^2 = 625 , 25 and 25 match 
*/
#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, sq, len=0, r, s=0, temp;
	printf("Enter any no: ");
	scanf("%d",&n);
	temp = n;
	sq = (n*n);
	while(n!=0)
	{
		n = n/10;
		len++;
	}
	for(i=0;i<len;i++)
	{
		r = sq%10;
		s = s + (pow(10,i)*r);
		sq = sq/10;
	}
	if(s==temp)printf("%d is Automorphic No.",temp);
	else	printf("%d is not Automorphic No.",temp);
}
