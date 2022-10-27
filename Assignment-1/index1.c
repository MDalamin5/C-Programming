#include<stdio.h>
int main()
{
    int a=5, b=13;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d and %d",a,b);
    return 0;
}