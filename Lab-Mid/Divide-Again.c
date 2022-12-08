#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    if(n%3==0)
    {
        printf("%lld",(n/3));
    }
    else
    {
        printf("%d",-1);
    }
}