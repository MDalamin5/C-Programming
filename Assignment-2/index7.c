#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int student[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&student[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=k+1;i<=n;i++)
    {
        printf("%d ",student[i]);
    }
    for(int i=1;i<=k;i++)
    {
        printf("%d ",student[i]);
    }
}