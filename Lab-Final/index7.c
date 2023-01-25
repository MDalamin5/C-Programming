#include<stdio.h>
int main()
{
    int t,index=1,flag=0;
    int n[1001];
    int s[1001];
    int nums[20][1001];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        for(int j=0;j<n[i];j++)
        {
            scanf("%d",&nums[i][j]);
        }
        scanf("%d",&s[i]);
    }
    for(int i=0;i<t;i++)
    {
        flag=0;
        for(int j=0;j<n[i];j++)
        {
            if(nums[i][j]==s[i])
           {
             flag=j+1;
             break;
           }
        }
        if(flag!=0)
        printf("Case %d: %d",index++,flag);
        else
         printf("Case %d: Not Found",index++);
        printf("\n");
    }
}
