
#include <stdio.h>

int main()
{
    int n=5;
    for (int i=0;i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
            {
                printf("%d",i+1);
            }
            else if (i+j == n-1)
            {
                printf("%d",j+1);
            }
            else
            {
                printf( " ");
            }
        }
        printf("\n");
    }

    return 0;
}