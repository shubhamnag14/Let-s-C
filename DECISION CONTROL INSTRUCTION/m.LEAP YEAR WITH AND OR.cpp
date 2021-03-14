#include<stdio.h>
main()
{
	int leap;
	printf("Enter the year:");
	scanf("%d",&leap);
	if ((leap%4==0 )&& (leap%100!=0)||(leap%400==0))
	{
		printf("THIS IS LEAP YEAR",leap);
	}
	else
	printf("NOT A LEAP YEAR",leap);
}
