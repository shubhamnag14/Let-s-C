#include<stdio.h>
#include<math.h>
int main()
{
	float i,p,t,r,c,a,b;
	for(i=0;i<=10;i++)
	{
		printf("\n\nEnter principal, rate, time (in year) and compound interest respectively : ");
		scanf("%f%f%f%f", &p,&r,&c,&t);
		
		b=pow((1+r/t),c*t);
		a=p*b;
		printf("\n%f is the amount.", a);
	}
	return 0;
}
