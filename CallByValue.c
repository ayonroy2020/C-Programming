/*** Use of Pointer
	 Call by value: When we are passing any value as argument of any function is called Call by value.
	 Here actual value will not be changed.
**/
#include<stdio.h>

void swap(int, int);
 
int main()
{
	int a=50, b=90;
	printf("Before swap: a = %d\tb = %d\n",a,b);
	swap(a,b);//a,b acctual argument
	printf("After  swap: a = %d\tb = %d",a,b);
	return 0;
}

void swap(int a,int b)//a,b formal argument.
{
	int c;
	c=a;
	a=b;
	b=a;
}
