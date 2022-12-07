#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=n;i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=n;k>0;k--)
        {
            printf("*");
        }

        printf("\n");
        
    }
}