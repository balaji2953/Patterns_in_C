//pascal's triangle pattern
#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf(" ");
        }
        int C = 1;
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}
/*
Output

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/
