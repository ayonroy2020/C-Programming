#include<stdio.h>

int main()
{
	int h, b, l, ch, r, rr;
	
	do
	{
		printf("\nPress 0 to Exit.\nPress 1 to Cal area of square.\nPress 2 to Cal area of triangle.\nPress 3 to Cal area of rectangle.\nPress 4 to Cal area of circle.");
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0: break;
			
			case 1: printf("\nEnter value of one side: ");
					scanf("%d",&l);
					r = l*l;
					printf("\nArea of Square is: %d",r);
					break;
			case 2: printf("\nEnter value of one length: ");
					scanf("%d",&l);
					printf("\nEnter value of one height: ");
					scanf("%d",&h);
					r = (l*h)/2;
					printf("\nArea of Triangle is: %d",r);
					break;
			case 3: printf("\nEnter value of one length: ");
					scanf("%d",&l);
					printf("\nEnter value of one breadth: ");
					scanf("%d",&b);
					r = l*b;
					printf("\nArea of Rectangle is: %d",r);
					break;
			case 4: printf("\nEnter value of radius: ");
					scanf("%d",&rr);
					r = 3.14*(rr*rr);
					printf("\nArea of Circle is: %d",r);
					break;
			default: printf("\nChoice Error.");
		}
	}while(ch!=0);
	return 0;
}
