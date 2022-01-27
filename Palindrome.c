#include<stdio.h>

int main()
{
	int n, r=0, temp;
	printf("Enter an num: ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		r = r*10 + n%10;
		n=n/10;
	}
	
	if(temp == r)
		printf("It is a palindrome number.");
	else
		printf("It is not a palindrome number.");
}
/*
Palindrome using recursion

int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    return 0;
}


int reverse(int num)
{
    int rem;
    static int sum=0;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            reverse(num/10);
    }
        else
            return sum;
    return sum;
} 
*/
