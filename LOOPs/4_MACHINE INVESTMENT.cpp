#include<stdio.h>
main() {

float i=1,x,y;


for(y=1.0;y<=6.0;y++) {

for(x=5.5;x<=12.5;x+=0.5) {

i=2+(y+(0.5*0.5));

printf("%.2f\t%.2f\t%.2f\n",i,y,x);

}

 }
return 0;

}
