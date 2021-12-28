#include<stdio.h>


void upper(char*);

int main()
{
	char ch[31];
	printf("\nEnter the string: ");
	
	//gets use to take string input(scanf cannot recognize space.)
	gets(ch);
	upper(ch);
	printf("String : %s",ch);
	return 0;
}

void upper(char *ch)
{
	for(;*ch!='\0';*ch++)
	{
		if(*ch>='a' && *ch<='z')
			*ch = *ch - 32;
	}	
}
