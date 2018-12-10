#include<stdio.h>

int main(void)
{
    int i,j,n;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //To iterate over rows
    {
        for(j=1;j<=i;j++) //To iterate over columns
        {
            printf("*");
        }
        printf("\n"); //To move to next line to start printing the next row
    }
}
