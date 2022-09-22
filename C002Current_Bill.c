#include<stdio.h>

int main()
{
	int unit, Bill;
	printf("Enter the Unit: ");
	scanf("%d",&unit);
	
	if(unit<=100)
		Bill = unit*5;
	else if(unit<=200)
		Bill = (100*5)+(unit-100)*6;
	else if(unit<=300)
		Bill = (100*5)+(100*6)+(unit-200)*7;
	else
		Bill = (100*5)+(100*6)+(100*7)+(unit-300)*9;
	
	printf("==============================Your Bill================================\n");
	printf("\tYour Unit is: %d\n",unit);
	printf("\tYour Total Bill: %d\n",Bill);
	return 0;
}
