#include<stdio.h>
int get_fact(int num);
double get_ratio(int num1,int num2);
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    double result=get_ratio(num1,num2);
    printf("The radio is: %.2lf",result);
}
int get_fact(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact *=i;
    }
    return fact;
}
double get_ratio(int num1,int num2)
{
    return (double)get_fact(num1)/get_fact(num2);
}
