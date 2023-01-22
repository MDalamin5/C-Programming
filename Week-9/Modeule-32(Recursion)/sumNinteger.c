#include<stdio.h>
int addNum(int i,int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Sum = %d",addNum(1,n));
}
int addNum(int i,int n)
{
    int sum;
    if(i>n)
    return 0;
    sum=addNum(i+1,n);
    return sum+i;
}