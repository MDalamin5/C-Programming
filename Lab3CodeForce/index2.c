#include<stdio.h>
int main()
{
   long long int num;
    int k,count=0,rem;
    scanf("%lld%d",&num,&k);
    while(count<k)
    {
        rem=num%10;
        if(rem==0)
        {
            num=num/10;
            count++;
        }
        else
        {
            num=num-1;
            count++;
        }
    }
    printf("%lld",num);
}