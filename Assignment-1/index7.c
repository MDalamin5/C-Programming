#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int small = (num1<num2) ? num1:num2;
    int gcd, count=1;
    while(count<=small)
    {
        if((num1%count==0) && (num2%count==0))
        {
            gcd=count;
            
        }
        count++;
    }
    printf("The GCD of %d and %d is %d.",num1,num2,gcd);
}