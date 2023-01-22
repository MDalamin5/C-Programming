#include<stdio.h>
int NaturalNumsSum(int num);
int main()
{
    int num;
    scanf("%d",&num);
    int result= NaturalNumsSum(num);
    printf("%d",result);
}
int NaturalNumsSum(int num)
{
    if(num==1)
        return 1;
    else
       return num+NaturalNumsSum(num-1);
}
