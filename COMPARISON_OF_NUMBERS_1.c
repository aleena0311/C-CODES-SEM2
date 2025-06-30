#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter a number b:");
	scanf("%d",&b);
	
	if (a<=b)
	{
		if(a<b)
		{
			printf("a is lesser");
		}
		else
		{
			printf("both are equal");
		}
	}
	
	else
	{
		printf("a is a greater number!");
	}
	
	return 0;
}
