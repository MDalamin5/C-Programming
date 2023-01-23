#include<stdio.h>
int naturalNumSum(int i,int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The sum is = %d",naturalNumSum(1,n));
}
int naturalNumSum(int i,int n)
{
    if(i>n)
    return 0;
    return i+naturalNumSum(i+1,n);
}