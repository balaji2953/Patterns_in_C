//Hour glass pyramid

#include<stdio.h>
int main()
{
 int row,col,space,n=5;
 for(row=1;row<=n;row++)               //this for loop used to print half of the inverted pyramid
 {
  printf("\n");
  for(space=1;space<row;space++)       // * * * * *
  {                                    //  * * * *
   printf(" ");                        //   * * *
  }                                    //    * *
  for(col=row;col<=n;col++)            //     *
  {
   printf("* ");
  }
 }                                     //  ---------------------
 for(row=2;row<=n;row++)               //this for loop used to print another half of the pyramid
 {
  printf("\n");                        //    * *
  for(space=row;space<n;space++)       //   * * *
  {                                    //  * * * *
   printf(" ");                        // * * * * *
  }
  for(col=1;col<=row;col++)
  {
   printf("* ");
  }
 }                                     //  -----------------------
 return 0;
}


/*
Output

* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *

*/
