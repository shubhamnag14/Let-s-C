#include<stdio.h>
#include<math.h>
main()
{
	float temp,vel,wcf;
	printf("Enter values of temp in velocity:");
	scanf("%f%f",&temp,&vel);
	wcf = 35.74 + 0.6215*temp+(0.4275*temp-35.75)*pow(vel,0.16f); // wind chilling factor formule
	printf("WIND CHILL FACTOR = %f\n",wcf);
}
