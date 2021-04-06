#include<stdio.h>
int main() 
{
  int i=1,j;
  printf("\nPrime numbers between 1 to 300 are:\n");
  while(i!=300) 
  {
  j=2;
  while(j<i) 
  {
  if(i%j==0)
  {
  break;
  }
  j++;
  }
  if(j==i) 
  {
  printf(" %d",i);
  }
  i++;
  }
return 0;
}
