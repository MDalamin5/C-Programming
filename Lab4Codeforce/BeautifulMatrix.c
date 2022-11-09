#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int M[5][5];
    int x,y,ans;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&M[i][j]);
            if(M[i][j]==1)
            {
                x=i;
                y=j;
            }

        }
    }
    ans= abs(2-x) + abs(2-y);
    printf("%d",ans);
    
}