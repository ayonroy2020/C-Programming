#include<stdio.h>
#include<math.h>

int main()
{
	int r, n, s = 0, i=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r = n%10;
		if(r!=0)	
		{
			s = (r*pow(10,i))+ s;
			printf("\ts=%d\n",s);
			i++;
		}
		n = n/10;
	}
	/*while(s!=0)
	{
		r = s%10;
		if(r!=0)n = r + (10*n);
		s = s/10;
	}*/
	
	printf("Zero removed no is: %d",s);
}
