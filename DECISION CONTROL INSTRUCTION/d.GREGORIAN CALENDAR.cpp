#include<stdio.h>
main()
{
	int ld,fd,yr;
	long nd,td;
	printf("Enter year");
	scanf("%d",&yr);
	nd = (yr-1)*365L;
	ld = (yr-1)/4-(yr-1)/100+(yr-1)/400;
	td = nd+ld;
	fd = td%7;
	if (fd==0)
	{
		printf("MONDAY\n");
	}
	else if(fd==1)
	{
		printf("TUESDAY\n");
	}
	else if (fd==2)
	{
		printf("WEDNESDAY\n");
	}
	else if (fd==3)
	{
		printf("THURSDAY\n");
	}
	else if (fd==4)
	{
		printf("FRIDAY\n");
	}
	else if (fd==5)
	{
		printf("SATURDAY\n");
	}
	else if (fd==6)
	{
		printf("SUNDAY\n");
	}
	else
	printf("WRONG INPUT");
}
