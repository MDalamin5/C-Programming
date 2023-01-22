#include<stdio.h>
void addTwoMatrix(int A[100][100],int B[100][100],int n,int m);
int main()
{
    int n,m;
    int matrix_A[100][100];
    int matrix_B[100][100];
    scanf("%d%d",&n,&m);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix_A[i][j]);
        }
    }
     printf("\n");
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix_B[i][j]);
        }
    }
    printf("\n\n");
    addTwoMatrix(matrix_A,matrix_B,n,m);
}
void addTwoMatrix(int A[100][100],int B[100][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
}
