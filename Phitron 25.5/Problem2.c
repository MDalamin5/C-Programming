#include<stdio.h>
void sortNums(int arr[],int size);
int getNthLargeValue(int arr[],int size,int nTHvalue);
int getNthSmallValue(int arr[],int size,int nTHvalue);
int main()
{
    int n,k;
    int nums[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    scanf("%d",&k);
    sortNums(nums,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",nums[i]);
    }
    int fourL=getNthLargeValue(nums,n,k);
    int fourS=getNthSmallValue(nums,n,k);
    printf("\n%d^th largest element = %d\n",k,fourL);
    printf("%d^th Smsllest element = %d\n",k,fourS);
}
void sortNums(int arr[],int size)
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
int getNthLargeValue(int arr[],int size,int nTHvalue)
{
    return arr[size-nTHvalue];
}
int getNthSmallValue(int arr[],int size,int nTHvalue)
{
    return arr[nTHvalue-1];
}

