#include<stdio.h>
int DivBy5(int nums[],int size);
int DivBy3(int nums[],int size);
int main()
{
    int n;
    int arr[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int div5=(DivBy5(arr,n));
    int div3=(DivBy3(arr,n));
    int result=div5+div3;
    if(result>0)
        printf("%d",result);
    else
        printf("%d",-1);
}
int DivBy5(int nums[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]%5==0 && nums[i]%3==0)
            count=count;
        else if(nums[i]%5==0)
            count++;
    }
    return count;
}
int DivBy3(int nums[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]%3==0)
            count++;
    }
    return count;
}
