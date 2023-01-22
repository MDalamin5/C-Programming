#include<stdio.h>
int arrAdd(int arr[],int i,int n);
int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Sum = %d",arrAdd(nums,0,n));
}
int arrAdd(int arr[],int i,int n)
{
    if(i==3)
    return 0;
    int s= arrAdd(arr,i+1,n);
    return s+arr[i];
}