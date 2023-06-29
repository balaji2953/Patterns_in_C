//Inverted Right-angle triangle

#include<stdio.h>
int main()
{
    int n=10,i,j;
    for(i=n; i>=1; i--)
    {
        printf("\n");
        for(j=1; j<=i; j++)
        {
            if(j==i||j==1||i==n)
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
output

* * * * * * * * * *
*               *
*             *
*           *
*         *
*       *
*     *
*   *
* *
*

*/
