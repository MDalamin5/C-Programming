#include<stdio.h>
int is_prime(int num);
int sum_dig(int num);
int main()
{
    int num;
    scanf("%d",&num);
    int result=sum_dig(num);
    printf("%d",result);
}
int sum_dig(int num)
{
    int rem,sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    return is_prime(sum);
}
int is_prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
