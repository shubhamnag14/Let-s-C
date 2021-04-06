#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float x,sum=0,t;
	printf("Enter the value of x : ");
	scanf("%f",&x);
	t=(x-1)/x;
	for(i=2;i<=7;i++)
	{
		sum = sum + 0.5 * pow(t,i);
	}
	sum = sum + t;
	printf("Sum of the 1st %d term pf natural log = %f",t,sum);
	return 0;
}
