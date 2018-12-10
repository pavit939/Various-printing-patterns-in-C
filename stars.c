#include<stdio.h>

int main(void)
{
    int i,j,n,k,p;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("Enter the total no of patterns to be printed:");
    scanf("%d",&p);
    for(k=1;k<=p;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=(n-i);j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
        
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(i=1;i<=n;i++)
        {
            for(j=n;j>(n-i);j--)
            {
                printf(" ");
            }
            for(j=n;j>i;j--)
            {
                printf("*");
            }
        
            for(j=n;j>i;j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
