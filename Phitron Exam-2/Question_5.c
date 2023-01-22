#include<stdio.h>
int add_three_nums(int a,int b,int c);
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int result=add_three_nums(num1,num2,0);
    printf("Sum = %d",result);
}
int add_three_nums(int a, int b, int c)
{
return a+b+c;
}

