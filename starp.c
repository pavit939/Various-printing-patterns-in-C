#include<stdio.h>

int main(void)
{
    int i,j,n;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //to iterate over rows
    {
        for(j=1;j<=(n-i);j++) //To iterate over columns to print spaces
        {
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++) //To iterate over columns to print stars
        {
            printf("*");
        }
        printf("\n"); //To move to a new line ater finishing one row
    }

}
