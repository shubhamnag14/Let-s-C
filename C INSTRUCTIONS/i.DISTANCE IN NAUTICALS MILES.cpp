#include<stdio.h>
#include<math.h>
main()
{
	float lat1,lat2,lon1,lon2,d;
	printf("Enter Latitude and Longitude of place 1:");
	scanf("%f%f",&lat1,&lon1);
	printf("Enter Latitude and Longitude of place 2 ");
	scanf("%f%f",&lat2,&lon2);
	lat1 = lat1*3.14/180;
	lat2 = lat2*3.14/180;
	lon1 = lon1*3.14/180;
	lon2 = lon2*3.14/180;
	d = 3963 * acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(lon2-lon1));
	printf("Distance between Place1 and Place2:%f\n",d);
	
	
}
