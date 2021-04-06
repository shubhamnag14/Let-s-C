#include<stdio.h>
#include<conio.h>
main() 
{
int i,j,k;


printf("All combinations of 1,2,3 are:\n\n");
for(i=1;i<=3;i++) {
for(j=1;j<=3;j++) {
for(k=1;k<=3;k++) {
printf(" %d%d%d ",i,j,k);
}
 }
  }
return 0;
}
