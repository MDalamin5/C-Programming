#include<stdio.h>
int FindLuckyNum(int arr[],int size);
int main()
{
    int n;
    int nums[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int res=FindLuckyNum(nums,n);
    if(res==1)
   printf("Beautifull");
   else
    printf("Ugly");
}
int FindLuckyNum(int arr[],int size)
{
    int n;
    int count_value;
    int last_dig;
    int dig_count[10]={0,0,0,0,0,0,0,0,0,0};
    if(size%2!=0)
    count_value=(size/2)+1;
    else
        count_value= size/2;
        for(int i=0;i<size;i++)
        {
            while(arr[i]!=0)
            {
                last_dig=arr[i]%10;
                dig_count[last_dig]++;
                arr[i]/=10;
            }
        }
    if((dig_count[7])>=count_value)
        return 1;
    else
        return 0;
}
