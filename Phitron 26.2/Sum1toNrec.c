#include<stdio.h>
int sum1_n(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("Sum = %d",sum1_n(num));
}
int sum1_n(int num)
{
    if(num==1)
        return 1;
    else
        return num+sum1_n(num-1);
}
