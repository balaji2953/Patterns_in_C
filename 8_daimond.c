//Daimond Pattern

#include<stdio.h>
int main()
{
    int n, i, j ,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)           // This loop for Prymid structure n rows
    {                                 //          *
        for(j = i; j <n; j++)         //        * * *
        {                             //      * * * * *
            printf("  ");             //    * * * * * * *
        }                             //  * * * * * * * * *
        for(k = 1; k <i+i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i = n-1; i >= 1; i--)        //This loop for invert Prymid structure
    {                                  //    * * * * * * *
        for(j = n; j > i; j--)         //      * * * * *
        {                              //        * * *
            printf("  ");              //          *
        }
        for(k = 1; k < i+i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


/*
Enter the number of rows: 5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
