#include<stdio.h>

int main(void)
{
    int i,j,n;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //To iterate over rows
    {
        for(j=1;j<=(n-i);j++) //To iterate over columns to print space
        {
            printf(" ");
        }
        for(j=1;j<=i;j++) //To iterate over columns to print star
        {
            printf("*");
        }
        printf("\n"); //To print the next row in new line
    }
}
