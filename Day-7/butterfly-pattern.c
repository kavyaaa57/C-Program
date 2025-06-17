
#include <stdio.h>

int main()
{
    int n=11;
    printf("Enter the n value:");
    scanf("%d",&n);
    n=(n*2)+1;
    for (int i=0; i<=n/2; i++)
    {
        if(i<n/2)
        {
            for(int j=0;j<=i;j++)
            {
                printf("*");
            }
            for (int s=0; s<n-((i*2)+2); s++)
            {
                printf(" ");
            }
            for (int k=0; k<=i; k++)
            {
                printf("*");
            }
        }
         else if (i==n/2)
        {
            for(int j=0;j<n;j++)
            {
                printf("*");
             }
         }
        printf("\n");
    }
     for (int j=(n/2)-1; j>=0; j--)
    {
        if (j==n/2)
        {
            for(int i=0;i<n;i++)
            {
                printf("*");
            }
        }
        else if(j<n/2)
        {
            for(int i=0;i<=j;i++)
            {
                printf("*");
            }
            for (int s=0; s<n-((j*2)+2); s++)
            {
                printf(" ");
            }
            for (int k=0; k<=j; k++)
            {
                printf("*");
            }
        }
        
        printf("\n");
    }
   
    

    return 0;
}
