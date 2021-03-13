#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5,avg;
	float per;
	printf("Enter the marks of 5 subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg = m1+m2+m3+m4+m5;
	per = avg *(100.00/500.00);
	printf("Aggregate marks :%d\n",avg);
	printf("Percentage of student:%f\n",per); 
}
