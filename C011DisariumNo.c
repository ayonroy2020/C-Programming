/*
	Disarium number (145 == 1^1+4^2+5^3=142 (not)) (89 == 8^1+9^2 =89(yes))
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int n,temp, len=0, r, s=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		r = n%10;
		s = (s*10)+r;
		n = n/10;
		len++;
	}
	s=0;
	n = temp;
	//printf("%d",len);
	while(n!=0)
	{
		r = n%10;
		s = s + pow(r,len);
		n = n/10;
		len--;
	}
	if(temp==s)
		printf("%d is a Disarium no.",temp);
	else
		printf("%d not a Disarium no.",temp);
}
