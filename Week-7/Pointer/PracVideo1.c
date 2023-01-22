#include<stdio.h>
int main()
{
    int a,b=12;
    int* p=&b;
    //printf("%p\n",&a);
    //printf("%p",b);
    printf("%d\n",p);
    printf("%d\n",*p);
}
