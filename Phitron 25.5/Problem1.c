#include<stdio.h>
void LessGatterThenComp(int arr[],int size,int compValue);
int main()
{
    int n;
    int num[1000];
    int k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&k);
    LessGatterThenComp(num,n,k);
}
void LessGatterThenComp(int arr[],int size,int compValue)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<compValue)
            count++;
        else if(arr[i]>compValue)
            count++;
    }
    printf("%d",count);
}

