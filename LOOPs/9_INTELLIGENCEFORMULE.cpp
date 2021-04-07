#include<stdio.h>
main() {

int i,p,r,n,q,j,pw;
float a;
for(i=0;i<10;i++) {

printf("Set number %d:\n\n\n\n",i+1);

printf("Enter p:  ");
scanf("%d",&p);

printf("\n\nEnter r:  ");
scanf("%d",&r);

printf("\n\nEnter n:  ");
scanf("%d",&n);

printf("\n\nEnter q: ");
scanf("%d",&q);

pw=n*q;

for(j=0;j<pw;j++) {

a = a + p *(1+r/1);

}
printf("\n\n\nA = %f\n",a);


printf("\n\n\n\npress any key to proceed...");
}
return 0;
}
