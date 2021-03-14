#include<stdio.h>
main()
{
	float area,peri,x,y;
	printf("Enter the length:");
	scanf("%f",&x);
	printf("Enter the Breadth:");
	scanf("%f",&y);
	area = x*y;
	peri = 2*(x+y);
	printf("AREA = %f\n",area);
	printf("PERIMETER = %f\n",peri);
	if (area>peri)
	{
		printf("Area of rectangle is greater than Perimeter:%f\n",area);
	}
	else if (area<peri)
	{
	printf("Area of rectangle is smaller than Perimeter:%f\n",peri);
	}
	else if (area==peri)
	{
		printf("Area of rectangle = perimeter of rectangle:%f\n",area,peri);
	}
	
}
