#include<stdio.h>
main()
{
	int val;
	printf("Enter a number:");
	scanf("%d",&val);
	if (val%3==0 && val%5==0)
	{
		printf("Divisible by 3 & 5");
	}
	else
	printf("NOT");
}
