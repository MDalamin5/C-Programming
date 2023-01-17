#include<stdio.h>
int AddNums(int nums[],int size);
int main()
{
     int n;
     int nums[101];
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         scanf("%d",&nums[i]);
     }
     int sum= AddNums(nums,n);
     printf("%d",sum);
}
int AddNums(int nums[],int size)
{
    int sum=0;
    for(int i=1;i<=size;i++)
    {
        if(i%2==0 && nums[i]%2==0)
            sum+=nums[i]+i;
        else if(i%2==1 && nums[i]%2==1)
            sum+=nums[i]+i;
    }
    return sum;
}
