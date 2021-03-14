#include<stdio.h>
main()
{
	int num,sum=0,rem,temp;
	printf("Enter a 5 digit number:");
	scanf("%d",&num);
	temp =num;
	if (temp>9999 && temp<10000)
	{
		printf("Reverse of %ld:",num);
	while(temp)
	{
		rem= temp%10;
		sum =sum*10+rem;
		temp = temp/10;
	}
}
else 
printf("Wrong number \n");
}
