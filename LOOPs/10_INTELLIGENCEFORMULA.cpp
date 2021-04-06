#include<stdio.h>
int main()
{
	int y;
	float x,i;
	printf("               y         x      =       i");
	for(y=1;y<=6;y++)
	{
		for(x=5.5;x<=12;x+=0.5)
		{
			i=2+(y+(x*0.5));
			printf("\n               %d     %f   =   %f", y, x, i);
		}
	}
	return 0;
}
