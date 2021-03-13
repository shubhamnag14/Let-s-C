#include<stdio.h>
main()
{
	float a,m,cm,ft,in;
	printf("Enter the distance between the cities in km:");
	scanf("%f",&a);
	m = a*1000;
	cm = a*100000;
	ft = a*3280.83;
	in = a*39370.078;
	printf("value in m : %f \n",m);
	printf("value in cm : %f \n",cm);
	printf("value in ft : %f \n",ft);
	printf("value in in : %f \n",in);
	
	
	
}
