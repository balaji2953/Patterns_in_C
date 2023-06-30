//Inverted pyramid

#include<stdio.h>
int main()
{
 int row,col,space,n=5;

 for(row=n;row>=1;row--)
 {
  for(space=row;space<n;space++)
  {
   printf(" ");
  }
  for(col=row;col>=1;col--)
  {
   printf("* ");
  }
  printf("\n");
 }
 return 0;
}
/*
output
* * * * *
 * * * *
  * * *
   * *
    *

*/
