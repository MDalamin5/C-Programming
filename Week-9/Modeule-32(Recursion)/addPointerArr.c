#include<stdio.h>
int addSummm(int arr[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Sum = %d",addSummm(num,n));
}
int addSummm(int arr[],int n)
{
    if(n==0)
    return 0;
    int s=addSummm(arr+1,n-1);
    return s+(*arr);
}