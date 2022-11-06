#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    for(long long int i=n-1;i>0;i--)
    {
        sum=sum+i;
    }
    printf("%lld",sum);
}