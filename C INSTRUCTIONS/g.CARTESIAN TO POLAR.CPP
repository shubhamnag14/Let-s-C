#include<stdio.h>
#include<math.h>
main()
{
	float x,y,r,theta;
	printf("Enter the x and y coordinates:")
	scanf("%f%f",&x,&y);
	r = sqrt(x*x+y*y);
	theta = atan2(y,x)l
	theta = theta*180/3.14;
	printf("R=%f theta=%f\n",r,theta);
	
}