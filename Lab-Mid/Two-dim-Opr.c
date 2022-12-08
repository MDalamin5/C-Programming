#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[100][100];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if((arr[i][j]==i)&&(arr[i][j]==j))
            {
                arr[i][j]+=3;
            }
            else if(arr[i][j]==i)
            {
                arr[i][j]+=2;
            }
            else if(arr[i][j]==j)
            {
                arr[i][j]+=1;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}