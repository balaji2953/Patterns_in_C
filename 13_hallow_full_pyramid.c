//Hallow Full pyramid

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
   if(col==1||col==row||row==n)
   {
    printf("* ");
   }
   else
    {
    printf("  ");
   }
  }
  printf("\n");
 }
 return 0;
}

/*
output
    *
   * *
  *   *
 *     *
* * * * *
*/
