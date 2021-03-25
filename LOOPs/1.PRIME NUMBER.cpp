#include<stdio.h>
main()
{
	int num,i,n=300;
	for(num=0;num<=300;num++)
	{
		i=2;
		while(i<n-1)
		{
			if (num%i==0)
			break;
			i++;
		}
		if(i==num)
		{
			printf("%d\n",num);
		}
	}
}
