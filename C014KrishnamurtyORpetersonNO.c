#include<stdio.h>

int main()
{
	int f, i, r, n, temp, s=0;
	printf("Enter any no: ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		r = n%10;
		f=1;
		for(i=1;i<=r;i++)
			f = f*i;
		s = s+f;
		n = n/10;
	}
	if(temp==s)	printf("%d is a Krishnamurty or Peterson no",temp);
	else	printf("%d is not a Krishnamurty or Peterson no",temp);
}
