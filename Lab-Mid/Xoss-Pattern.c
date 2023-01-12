#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                if(i==1)
                {
                    printf("%d",j);
                }
                else if(j==1)
                {
                    printf("%d",i);
                }
                else if(i==n)
                {
                    printf("%d",n);
                }
                else if(j==n)
                {
                    printf("%d",n);
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}