//Floyd Triangle

#include<stdio.h>
int main()
{
    int n=5,k;
    for(int i=1; i<=n; i++)
    {
        k=i;
        for(int j=n; j>=i; j--)
        {
            printf("%d ",k);
            k+=j;
        }
        printf("\n");
    }
    return 0;
}


/*
output

1 6 10 13 15
2 7 11 14
3 8 12
4 9
5

*/
