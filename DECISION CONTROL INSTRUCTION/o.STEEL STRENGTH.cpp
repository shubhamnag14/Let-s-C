#include<stdio.h>
main()
{
	float H,C,T;
	printf("Enter the hardness:");
	scanf("%f",&H);
	printf("Enter the Carbon content:");
	scanf("%f",&C);
	printf("Enter the Tensile strength:");
	scanf("%f",&T);
	if(H>50 && C<0.7 && T>5600)
	{
		printf("Steel has grade 10");
	}
	else if (H<50 && C<0.7 && T<=5600)
	{
		printf("Steel has grade 9");
	}
	else if (H>50 && C<0.7 && T>5600)
	{
		printf("Steel has grade 8");
	}
	else if (H>50 && C>0.7 && T>5600)
	{
		printf("Steel has grade 7");
	}
	else if (H>50 || C<0.7 || T>5600)
	{
		printf("Steel has grade 6");
	}
	else 
	printf("Steel has grade 5");
	
}
