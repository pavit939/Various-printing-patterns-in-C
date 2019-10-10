#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the no of terms:"); 
    scanf("%d",&n);
    for(i=1;i<=n;i++) //To iterate by rows
    {
        for(j=1;j<=n;j++) //To iterate by columns 
        {
            printf("*");
        }
        printf("\n"); //New line to start printing next row
    }
    return 0;
    
}
