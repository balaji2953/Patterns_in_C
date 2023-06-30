//Full pyramid

#include<stdio.h>
int main()
{
 int row,col,space,n=5;
 for(row=1;row<=n;row++)
 {
  for(space=row;space<n;space++)
  {
   printf(" ");
  }
  for(col=1;col<=row;col++)
  {
   printf("* ");
  }
  printf("\n");
 }
 return 0;
}

/*
output
    *
   * *
  * * *
 * * * *
* * * * *

*/
