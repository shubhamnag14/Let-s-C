#include<stdio.h>
main()
{
	int sp,cp,l,p;
	printf("Enter the selling price:\n");
	scanf("%d",&sp);
	printf("Enter the cost price:\n");
	scanf("%d",&cp);
	if(cp>sp)
	{
		l=cp-sp;
		printf("you have made Loss:%d\n",l);
	}
	else if(sp>cp)
	{
		p=sp-cp;
		printf("you have made profit:%d\n",p);
	}
	else if(sp=cp)
	{
		printf("you have either loss or profit");
	}
}
