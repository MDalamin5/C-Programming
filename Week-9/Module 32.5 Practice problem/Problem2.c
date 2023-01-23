#include<stdio.h>
int lastDigSum(int arr[],int i,int size);
int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("The sum of last dig: %d",lastDigSum(nums,0,n));
}
int lastDigSum(int arr[],int i,int size)
{
    int rem=0;
    if(i==size)
    return 0;
    rem=arr[i]%10;
    return rem+lastDigSum(arr,i+1,size);
}