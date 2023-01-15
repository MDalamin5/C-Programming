#include<stdio.h>
void swapp(int *a,int *b);
void sortt(int arr[],int size);
int main()
{
    int n;
    int nums[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    sortt(nums,n);
     for(int i=0;i<n;i++)
    {
        printf("%d ",nums[i]);
    }
}
void sortt(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swapp(&arr[j],&arr[j+1]);
            }
        }
    }
}
void swapp(int *a, int *b)
{
    int temp= *a;
    *a= *b;
    *b=temp;
}
