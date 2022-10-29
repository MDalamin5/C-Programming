#include<stdio.h>
int main()
{
    long long int num;
    
    scanf("%lld",&num);
    int count=0;
    while(num !=0)
    {
        if(num%10)
        {
            count++;

        }
        num=num/10;
    }
    printf("%d digits",count);

}