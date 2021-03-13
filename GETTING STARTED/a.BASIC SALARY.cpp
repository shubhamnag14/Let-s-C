#include<stdio.h>
main()
{
	int sl;
	float a,b,gs;
	printf("Enter the Basic salary of ramesh:");
	scanf("%d",&sl);
	a=sl*0.4;
	b=sl*0.2;
	gs= sl-a-b;
	printf("Gross salary of ramesh: %f",gs);
	
}
