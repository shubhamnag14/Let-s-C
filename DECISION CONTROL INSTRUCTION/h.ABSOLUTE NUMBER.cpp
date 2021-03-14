#include<stdio.h>
main()
{
	float abs,num;
	printf("Enter the number:");
	scanf("%f",&num);
	if (num<0)
	{
		abs = num*(-1);
	}
	else
	   abs = num;
	printf("Absolute value of %f",num,abs);
}
