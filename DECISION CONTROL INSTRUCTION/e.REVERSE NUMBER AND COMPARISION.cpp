#include<stdio.h>
main()
{
long i,d1,d2,d3,d4,d5,a,b,c,d,num;

printf("Please enter a five digit number: \n");
scanf("%ld",&i);


d1=i/10000;
a=i%10000;

d2=a/1000;
b=a%1000;

d3=b/100;
c=b%100;

d4=c/10;
d=c%10;

d5=d/1;
num=(d5*10000)+(d4*1000)+(d3*100)+(d2*10)+(d1*1);

printf("The REVERSED NUMBER is %ld \n",num);

if(num==i)
{
printf("\nboth numbers are SAME.\n");
}
else {
printf("\nboth number are NOT SAME.\n");
}


}

