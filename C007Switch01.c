#include<stdio.h>

int main()
{
	int a, b, ch, result;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("\nEnter value of b: ");
	scanf("%d",&b);
	
	do
	{
		printf("\nPress 0 to Exit.\nPress 1 to addition.\nPress 2 to subtruction.\nPress 3 to multipication.\nPress 4 to division.");
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0: 
					break;
			case 1: result = a+b;
					printf("Addition is: %d", result);
					break;
			case 2: result = a-b;
					printf("Subtruction is: %d", result);
					break;
			case 3: result = a*b;
					printf("Multiplication is: %d", result);
					break;
			case 4: result = a/b;
					printf("Division is: %d", result);
					break;
			default:printf("Choice Error.");
		}
	}while(ch!=0);
}
