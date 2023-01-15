#include<stdio.h>
int main()
{
    int a,b;
    int* ptr1;
    int* ptr2;
    ptr1=&a;
    ptr2=&b;
    scanf("%d%d",ptr1,ptr2);
    float avg = (float)(*ptr1 + *ptr2)/2;
    printf("%.3f",avg);
}
