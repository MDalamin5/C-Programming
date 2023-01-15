#include<stdio.h>
int lastDig_check(int num);
int sum_lastDig_zero(int arr[],int size);
int main()
{
    int n;
    int nums[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("%d", sum_lastDig_zero(nums,n));
}
int sum_lastDig_zero(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(lastDig_check(arr[i])==1)
        {
            sum+=arr[i];
        }
    }
    return sum;
}
int lastDig_check(int num)
{
    int last_dig= num%10;
    if(last_dig==0)
        return 1;
    else
        return 0;
}
