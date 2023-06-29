//Right-angle Triangle

#include<stdio.h>
int main()
{
    int n=10,i,j;
    for(i=1; i<=n; i++)
    {
        printf("\n");
        for(j=1; j<=n; j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
    }
    return 0;
}

/*

Output

*
* *
*   *
*     *
*       *
*         *
*           *
*             *
*               *
* * * * * * * * * *

*/
