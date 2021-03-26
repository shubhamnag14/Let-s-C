#include<stdio.h>
main()
{
	int num,res,a=1;
	printf("Enter any number to know its table till 12:");
	scanf("%d",&num);
	for(a=0;a<=12;a++)
	{
		res = a*num;  //multipyin the value of num * a (a is incrementing by one)
		printf("%d X %d = %d\n",num,a,res);
		//a++;
	}
}
