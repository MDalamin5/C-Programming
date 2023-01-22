#include<stdio.h>
int main()
{
    int a=12;
    int* p;
    int* q;
    p=&a;

    *p=22;
    printf("%d\n",a);
    q=p;
    *q=11;
    printf("%d\n",a);
}
