#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int safe[n];
    int falg = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&safe[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(safe[i]==1)
        {
            falg=1;
        }
        for(int j=2;j<safe[i];j++)
        {
            if(safe[i]%j==0)
            {
                falg=1;
            }
            
        }
        if(falg==0)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        falg=0;
    }
}