#include<stdio.h>
main()
{
	int d;
	printf("Enter No.of late days fr returning the book:");
	scanf("%d",&d);
	if (d<=5)
	{
		printf("Fine is 50 paise \n");
	}
	else if (d>5 && d<=10)
	{
		printf("Fine is 1 rupee \n");
	}
	else if (d>10 && d<=30)
	{
		printf("Fine is 5 rupee \n");
	}
	else if (d>30)
	{
		printf("YOUR MEMBERSHIP IS CANCELED \n");
	}
}
