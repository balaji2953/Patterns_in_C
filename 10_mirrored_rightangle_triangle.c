// Mirrored Right angle triangle
#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("  ");
        }
        for(k=i; k>=1; k--)
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

