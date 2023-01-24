#include<stdio.h>
#include<stdbool.h>
int isWin(int a[][4],int n);
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
                printf("You are enter invalid input.");
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
                printf("Invalid input you are entering");
                goto Flag2;
            }
            a[r][c]=2;
            player1=true;
            player2=false;
        }
        if(isWin(a,n)==1)
        {
            printf("Player 1 is won!\n");
            printCell(a,n);
            break;
        }
        else if(isWin(a,n)==2)
        {
            printf("Player 2 is won!\n");
            printCell(a,n);
            break;
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
        if(i<n)
        printf("___________________________________");
        printf("\n\n");
    }
}
int isWin(int a[][4],int n)
{
    for(int i=0;i<=n;i++)
    {
        if(a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][1]!=-1)
            return a[i][1];
    }
    for(int j=1;j<=n;j++)
    {
        if(a[1][j]==a[2][j] && a[2][j]==a[3][j] && a[2][j]!=-1)
        return a[2][j];
    }
    if(a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]!=-1)
    return a[1][1];

    return -1;
}