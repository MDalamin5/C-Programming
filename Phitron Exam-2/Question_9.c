#include<stdio.h>
void TransposeMatrix(int arr[3][3],int size);
int main()
{
    int matrix[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    TransposeMatrix(matrix,3);
}
void TransposeMatrix(int arr[3][3],int size)
{
    printf("Transpose Matrix is: \n\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
