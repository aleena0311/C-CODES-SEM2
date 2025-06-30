#include <stdio.h>

int main()
{
	char name;
	printf("Enter name of student:");
	scanf("%s",&name);
	
	int eng, math, phy, chm, bio;
	printf("Marks in english:");
	scanf("%d",&eng);
	printf("Marks in maths:");
	scanf("%d",&math);
	printf("Marks in physics:");
	scanf("%d",&phy);
	printf("Marks in chemsitry:");
	scanf("%d",&chm);
	printf("Marks in biology:");
	scanf("%d",&bio);
	
	float total;
	double percentage;
	total = eng+math+phy+chm+bio;
	percentage = ((total/500)*100);
	printf("Percenatage obtained is %.2f \n",percentage);
	
	if(percentage>50)
	{
		printf("Yay! You have passed!");
	}
	else
	{
		printf("Oops! Better luck next time.");
	}
	
	return 0;
}
