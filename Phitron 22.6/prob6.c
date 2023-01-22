#include<stdio.h>
void RockFight(int num,int row[8],int col[8]);
int main()
{
    int n;
    printf("Enter the value of R: ");
    scanf("%d",&n);

   int row[8];
   int col[8];
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&row[i],&col[i]);
    }
    RockFight(n,row,col);
}
void RockFight(int num,int row[8],int col[8])
{
    int count=1;
        for(int i=1;i<=num;i++)
        {
           if(row[i]==col[i])
            count++;
        }

}
