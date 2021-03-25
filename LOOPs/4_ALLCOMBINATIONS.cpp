#include<stdio.h>
main()
{
	int i ,j,k;
	for (i=1;i<=3;i++)
	{
		for (j=1;j<=3;j++)
		{
			for (k=1;k<=3;k++)
			{
				if (i==j||i==k||j==k)
				continue;
				printf("%d\n",i*100+j*10+k);
			}
		}
	}
	printf("All possible combinations of 1,2and3");
}
