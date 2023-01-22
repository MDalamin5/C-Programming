#include<stdio.h>
void MaxxMinn(int arr[],int size, int *p,int *q);
int main()
{
    int n;
    int nums[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
     int maxx,minn;
    MaxxMinn(nums,n,&maxx,&minn);
    printf("Max= %d,  Min=%d",maxx,minn);
}
void MaxxMinn(int arr[],int size, int *p,int *q)
{
    *p= arr[0];
     *q= arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>*p)
        *p = arr[i];
         if(arr[i]<*q)
        *q = arr[i];

    }
}
