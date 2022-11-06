#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    int temp;
    for(int i=1;i<=n;i++)
    {
        temp=i;
        for(int j=1;j<=i;j++)
        {
            
            printf("%d ",temp);
            temp--;
            
        }
        printf("\n");
        
    }

}