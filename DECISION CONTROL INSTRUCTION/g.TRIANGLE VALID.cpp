#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first side:");
	scanf("%d",&a);
	printf("Enter the Second side:");
	scanf("%d",&b);
	printf("Enter the third side:");
	scanf("%d",&c);
	
	if (a+b+c==180)
	{
		printf("The triangle is valid\n");
	}
	else
	printf("Not valid");
}
