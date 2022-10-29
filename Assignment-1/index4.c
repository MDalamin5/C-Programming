#include<stdio.h>
int main()
{
    long long int num;
    
    scanf("%lld",&num);
    int rem,sum=0;
    while(num !=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("%d",sum);
    
}