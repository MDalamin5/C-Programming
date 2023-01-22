#include<stdio.h>
int main()
{
    int a=7;
    printf("a %d\n",a);
    int* p=&a;
    printf("p =%d\n",*p);
    *p=11;
    printf("p =%d\n",*p);
    int** q=&p;

    **q=55;
    printf("%d\n ",a);
    printf("%d\n ",**q);
}
