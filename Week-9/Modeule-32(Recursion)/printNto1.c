#include<stdio.h>
void PrintNum(int n,int end);
int main()
{
    int n;
    scanf("%d",&n);
    PrintNum(n,1);
}
void PrintNum(int n,int end)
{
    if(n<end)
    return;
    printf("%d ",n);
    n--;
    PrintNum(n,end);
}