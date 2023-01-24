#include<stdio.h>
#include<stdbool.h>
void printCell(int a[4][4],int n);
int main()
{
    int n=3;
    int a[4][4];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=-1;
        }
    }
     bool player1=true;
     bool player2=false;
    while (true)
    {
        printCell(a,n);
        if(player1==true)
        {
            int r,c;
            Flag:
            printf("Player 1 Turn (X), Enter the row and col: ");
            scanf("%d%d",&r,&c);
            if(a[r][c]!=-1)
            {
                printf("You are enter invalid input.\n");
                goto Flag;
            }
            a[r][c]=1;
            player1=false;
            player2=true;
        }
        else
        {
            int r,c;
            Flag2:
            printf("Player 2 Turn (O), Enter the row and col: ");
            scanf("%d%d",&r,&c);
            if(a[r][c]!=-1)
            {
                printf("Invalid input you are entering\n");
                goto Flag2;
            }
            a[r][c]=2;
            player1=true;
            player2=false;
        }
    }
    
}
void printCell(int a[4][4],int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==-1) printf(" ");
            if(a[i][j]==1) printf("X");
            if(a[i][j]==2) printf("O");
            if(j<n) printf("\t|\t");
        }
        printf("\n");
        printf("___________________________________");
        printf("\n\n");
    }
}