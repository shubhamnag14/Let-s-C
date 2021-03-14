#include<stdio.h>
main()
{
	int num,last,first,sum;
	printf("Enter the 4 digit number:");
	scanf("%d",&num);
	last = num%10;
	first = num/1000;
	sum = first + last;
	printf("Sum :%d is %d",num,sum);
	
}
