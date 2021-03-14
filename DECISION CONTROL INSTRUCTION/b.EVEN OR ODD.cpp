#include<stdio.h>
main()
{
	int num;
	printf("Enter the value:");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("%d Number is even",num);
	}
	else
	{
		printf("number is odd %d",num);
	}
}
