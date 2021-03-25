#include<stdio.h>
main()
{
	float i,sum=0,fact,ser;
	for(i=0;i<=7;i++)
	{
		fact = i;
		for(int j=1;j<i;j++)
		{
			fact =fact*j;
		}
		ser = i/fact;
		sum = sum +ser;
	}
	printf("%f is the sum of the series",sum);
}
