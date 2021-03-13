#include<stdio.h>
main()
{
	int sp,tp,cp,cp1;
	printf("Enter the selling price of 15 items:");
	scanf("%d",&sp);
	printf("Enter profit on selling 15 items:");
	scanf("%d",&tp);
	cp = sp-tp;
	cp1 = cp/15;
	printf("Cost price of 15 items:%d",cp1);
	
	
}
