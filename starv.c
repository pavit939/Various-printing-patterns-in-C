#include<stdio.h>

int main(void)
{
    int i,j,n;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //To iterate over rows
    {
        for(j=n;j>=i;j--) //to iterate over columns to print star in reverse order starting from value of n
        {
            printf("*");
        }
        printf("\n"); //To print the next row in new line
    }
}
