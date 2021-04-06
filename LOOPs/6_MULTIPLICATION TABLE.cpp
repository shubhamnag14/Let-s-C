#include<stdio.h>
main() {

int i,j,k;
clrscr();

printf("Please enter the number:\n");
scanf("%d",&i);

for(j=1;j<=10;j++) {
k=i*j;
printf("\n%d*%d = %d\n",i,j,k);
}

getch();


}
