#include<stdio.h>
void sortAsenOrder(int arr[],int size);
void sortDesenOrder(int arr[],int size);
int main()
{
    int n;
    scanf("%d",&n);
    int A[101];
    int B[101];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }
    sortAsenOrder(A,n);
    sortDesenOrder(B,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]-B[i]);
    }
}
void sortAsenOrder(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void sortDesenOrder(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]>arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}