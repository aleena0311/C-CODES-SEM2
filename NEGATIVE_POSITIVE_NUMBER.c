#include <stdio.h>

int main()
{
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	
	if(x<0)
	{
		printf("it is a negative number!");
	}
	else
	{
		printf("it is a positive number!");
	}
	
	return 0;
}
