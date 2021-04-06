#include<stdio.h>
main() {

int i,j,k,l;

for(i=71;i>=65;i--) {

for(j=65;j<=i;j++) {

printf("%c ",j);

}

for(k=i+1;k<=71;k++) {

if(k==71)
printf("  ");

if(k<71)
printf("    ");
}

for(l=i;l>=65;l--) {

if(l==71) {     
continue;
}

printf("%c ",l);

}
printf("\n");
}
return 0;
}
