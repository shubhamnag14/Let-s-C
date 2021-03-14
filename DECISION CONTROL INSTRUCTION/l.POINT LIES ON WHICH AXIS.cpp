#include<stdio.h>
float X,Y;
void main()
{
    clrscr();
    printf("Enter X & Y co-ordinates of a point: ");
    scanf("%f%f",&X,&Y);
    if(X==0 && Y==0)
        printf("Point lies on Origin");
    else if(X==0 && (Y>0 || Y<0))
        printf("Point lies on Y-Axis");
    else if(Y==0 && (X>0 || X<0))
        printf("Point lies on X-Axis");
    else if(X>0 && Y>0)
        printf("Point lies in 1st quadrant");
    else if(X>0 && Y<0)
        printf("Point lies in 4th quadrant");
    else if(X<0 && Y>0)
        printf("Point lies in 2nd quadrant");
    else if(X<0 && Y<0)
        printf("Point lies in 3rd quadrant");
}
