#include<stdio.h>
int main()
{
    int row1,col1,row2,col2;
    printf("Enter the value of row and col for first martix: ");
    scanf("%d%d",&row1,&col1);
    printf("Enter the value of row and col for 2nd martix: ");
    scanf("%d%d",&row2,&col2);
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    printf("Enter First Matrix Elements: \n\n");

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("Matrix1[%d][%d]= ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nEnter Secend Matrix Elements: \n\n");

    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            printf("Matrix1[%d][%d]= ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    int ansMat[3][3];
    int count=0;
    int ans=0;

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            for(int k=0;k<col1;k++)
            {
                ans=ans+(matrix1[i][k]*matrix2[k][j]);
            }
            ansMat[i][j]=ans;
            ans=0;
        }
        
    }
        printf("\n<==Your Result is==>\n")
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("%d ",ansMat[i][j]);
            
        }
        printf("\n");

    }

}