#include<stdio.h>
main()
{
	int num,sum,a,b,c,d,e,s1,s2,s3,s4,s5;
	printf("Enter the numbers:");
	scanf("%d",&num);
	a = num/10;
	s5 = num%10;
	b= a/10;
	s4 = a%10;
	c= b/10;
	s3= b%10;
	d= c/10;
	s2= c%10;
	e = d/10;
	s1= d%10;
	printf("Sum of digit:%d\n",sum);
	}

