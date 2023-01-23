#include<stdio.h>
void disNum(int i,int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    disNum(1,n);
}
void disNum(int i,int n)
{
    if(i>n)
    return;
    disNum(i+1,n);
    printf("%d ",i);
}