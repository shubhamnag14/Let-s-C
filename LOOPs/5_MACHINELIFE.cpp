#include<stdio.h>
main()
{
	int year=0,inv,altn;
	while(altn>inv)
	{
		year+=1;
		altn=90*year;
		inv=(1000*year)-(6000-2000);
	}
	printf("Minimum life would be =%d",year);
}
