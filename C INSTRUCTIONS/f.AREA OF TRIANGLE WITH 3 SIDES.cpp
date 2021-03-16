#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,sp,area;
	printf("Enter the value of 3sides:");
	scanf("%f%f%f",&a,&b,&c);
	sp = (a+b+c)/2;
	area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	printf("Area of triangle:%d\n");
}
