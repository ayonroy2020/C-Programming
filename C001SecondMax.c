//Second max value among three values
#include<stdio.h>
int main()
{
	int a, b, c, k;
	printf("Enter three value: ");
	scanf("%d\t%d\t%d",&a,&b,&c);

	/*============== Ayon =============*/
	
	if((b<a && b>c) || (b>a && b<c))
		printf("Second Max is b: %d",b);
	else if((a<b && a>c) || (a<c && a>b))
		printf("Second Max is a: %d",a);
	else
		printf("Second Max is c: %d",c);

	
	
	/*============== SIR ==============*/
	
/*	if(a>b && a>c)
	{
		if(b>c)	printf("Second Max is: %d",b);
		else printf("Second Max is: %d",c);
	}
	else if(b>a && b>c)
	{
		if(a>c)	printf("Second Max is: %d",a);
		else printf("Second Max is: %d",c);
	}
	else
	{
		if(a>b)	printf("Second Max is: %d",a);
		else printf("Second Max is: %d",b);
	}
	*/
	
	return 0;
	
}


