#include<stdio.h>
//#include<conio.h>
int main() 
{

int i,num=0,k,j;
for(i=1;i<=4;i++) 
{
for(j=4;j>=i;j--) {      /* loop for making a space from left corner */

printf("  ");

}

for(k=1;k<=i;k++) {

num=num+1;              /* incrementing external number for printing */

printf("  %d ",num);

}

printf("\n\n");
}
}
