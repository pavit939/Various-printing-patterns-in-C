#include<stdio.h>

int main(void)
{
    int n,i,j;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //To iterate over rows
    {
        for(j=1;j<=(n-i);j++) //To print space
        {
            printf(" ");
        }
        for(j=1;j<=i;j++) //To print star from right to left 
        {
            printf("*");
        }
        printf("  "); // Space to differentiate the two patterns
        for(j=1;j<=i;j++) //To print star from left to right
        {
            printf("*");
        }
        printf("\n");
    }
}
