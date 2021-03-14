#include<stdio.h>
main()
{
	int s1,s2,x1,x2,x3,y1,y2,y3;
	printf("Enter the coordinate of 3 points:\n");
	printf("\n(x1,y1):\n");
    scanf("%d%d",&x1,&y1);
    printf("\n(x2,y2):\n");
    scanf("%d%d",&x2,&y2);
    printf("\n(x3,y3):\n");
    scanf("%d%d",&x3,&y3);
	s1 = ((y2-y1)/(x2-x1));
	s2 = ((y3-y1)/(x3-x1));
	if (s2==s1)
	{
		printf("Number are onthe straight line.\n");
	}
	else
	printf("Number are not on the straight line \n");
}
