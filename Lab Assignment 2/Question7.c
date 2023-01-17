#include<stdio.h>
void swapIndex(int *ptr1,int *ptr2);
void swapArray(int arr[],int L_index,int R_index);
int main()
{
    int n;
    int nums[102];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int L_indx[102];
    int R_indx[102];
    int swap_indxNum;
    scanf("%d",&swap_indxNum);
    for(int i=1;i<=swap_indxNum;i++)
    {
        scanf("%d%d",&L_indx[i],&R_indx[i]);
    }
    for(int i=1;i<=swap_indxNum;i++)
    {
        swapArray(nums,L_indx[i],R_indx[i]);
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",nums[i]);
    }
}
void swapIndex(int *ptr1,int *ptr2)
{
    int temp= *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}
void swapArray(int arr[],int L_index,int R_index)
{
    swapIndex(&arr[L_index],&arr[R_index]);
}

