#include<stdio.h>
main() {

int i,j,k;
printf("      1\n\n\n");

for(i=1;i<=4;i++) {

for(k=5;k>=i;k--) {
printf(" ");
}
printf("1 ");

for(j=1;j<=i;j++) {

if(i==4 && j==3)  {
printf("%d ",i+j-1);
continue;
}

if(j>1)
printf("%d ",i);

}

printf("1\n\n\n");

}
return 0;

}
