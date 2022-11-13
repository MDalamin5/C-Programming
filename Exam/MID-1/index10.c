#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int sum=0,rem;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    printf("%d",sum);

}