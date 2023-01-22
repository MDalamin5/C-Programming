#include<stdio.h>
int num7present(long long int num);
int digite_sum(long long int num);
int last_digite_Pcheck(long long int num);
int is_prime(int num);

int main()
{
    long long int num;
    printf("Enter a number: ");
    scanf("%lld",&num);
    int n7present= num7present(num);
    int Digsum=digite_sum(num);

    int LastPrCheck= last_digite_Pcheck(num);
   // printf("%d\n%d\n%d\n",n7present,Digsum,LastPrCheck);
    if(n7present==1&&Digsum==1&&LastPrCheck==1)
        printf("%d is Al Amin's Number.",num);
    else
        printf("%d is not Al Amin's number.",num);
}
    int num7present(long long int num)
    {
        int rem;
        while(num!=0)
        {
            rem=num%10;
            if(rem==7)
            {
                return 1;
                break;
            }
            num=num/10;
        }
        return 0;
    }
    int digite_sum(long long int num)
    {
        int sum,rem;
        while(num!=0)
        {
            rem=num%10;
            sum+=rem;
            num=num/10;
        }
        if(sum>10)
            return 1;
        else
            return 0;
    }
    int last_digite_Pcheck(long long int num)
    {
        int last_dig;
        last_dig=num%10;
        int flag= is_prime(last_dig);
        if(flag==0)
            return 1;
        else
            return 0;
    }
    int is_prime(int num)
    {
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                return 1;
                break;
            }
        }
        return 0;
    }
