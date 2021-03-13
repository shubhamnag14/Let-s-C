#include<stdio.h>
main()
{
	int l,b,r,a,p;
	float ac,ap;
	printf("enter the value of l and b : \n");
	scanf("%d%d",&l,&b);
	printf("enter the value of radius ");
	scanf("%d",&r);
	a = l*b;
	p = 2*(l+b);
	ac = 3.14*(r*r);
	ap = 2*3.14*r;
	printf("area of rec : %d \n",a);
	printf("area of rec peri : %d\n",p);
	printf("area of cir : %f\n",ac);
	printf("area of cir peri : %f\n",ap);
	
}
