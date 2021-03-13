#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter th value of a and b \n");
	scanf("%d%d",&a,&b);
		
		temp= a;
		a=b;
		b=temp;
	printf("swapped values: %d%d",a,b);	  
}
