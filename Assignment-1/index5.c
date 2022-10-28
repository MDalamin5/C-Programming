#include<stdio.h>
int main()
{
   long long int num;
    printf("Enter the value of N: ");
    scanf("%lld",&num);
    
    while(num >1)
    {
        printf("%lld ",num);
        if(num%2==0)
        {
            num=num/2;
          
        }
        else
        {
            num=num-1;
           
        }
           
    }
        printf("%lld ",num);
}