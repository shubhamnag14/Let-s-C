#include<stdio.h>
#include<math.h>
main()
{
	int x,y,rad,a,b,dist;
	printf("Enter the coordinates:");
	scanf("%d%d",&x,&y);
	printf("Enter the radius of circle:");
	scanf("%d",&rad);
	printf("Enter the  co ordinates of the point:");
	scanf("%d%d",&a,&b);
	dist = sqrt(pow((a-x),2)+pow((b-y),2));
	if (dist<rad)
	{
		printf("Point(%d,%d) lies inside the circle",a,b);	
	}
	else if (dist>rad)
	{
		printf("Point(%d,%d) lies on the circle",a,b);
	}
	else
	printf("Point (%d,%d) lies outside the circle",a,b);
}
