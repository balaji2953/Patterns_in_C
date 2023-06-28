#include<stdio.h>      //headerfile

int main()
{
 int row,col;             //Initlaize Variable
 for(row=0;row<10;row++)  //For loop to row
 {
  for(col=0;col<10;col++) //For loop to column
  {
   printf("* ");
  }
  printf("\n");           //Print new after every row end
 }
 return 0;
}

/*
output:
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *

*/
