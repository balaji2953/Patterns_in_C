//Floyd Pyramid
#include<stdio.h>
int main()
{
    int n=4,z=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("%d ",z);
            z++;
        }
        printf("\n");
    }
    return 0;
}

/*
output

   1
  2 3
 4 5 6
7 8 9 10

*/
