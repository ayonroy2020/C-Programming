#include<stdio.h>

int main()
{
	int n, i, f0, f1, f2, j, c, num;
	f0 = 0; f1=1; num=2;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if((i%2)==0)
		{
			printf("(%d) ",f0);
			f2 = f0+f1;
			f0 = f1;
			f1 = f2;
		}
		
//===================== Done =======================//		
		else
		{
			while(1)
			{
		      	c = 0;
		      	for(j=2;j<=num/2;j++)
				{
		        	if(num%j==0){
		            	c++;
		         		break;
		      		}
				}
				if(c==0 && num!= 1)
			    {
			    	printf("%d ",num);
			    	num++;
			    	break;
				}
				else num++;
			}
				
		}
		
		/*else
		{
			c = 0;
			if(i==1)
				printf("2 ");
			else
			{
				for(j=2;j<=i/2;j++)
				{
					if((i%j)==0)
					{
						c++;
						break;
					}
				}
				if(c==0)
					printf("%d ",i);
				else	printf("_ ");
			}
		}*/
	}
	return 0;
}
