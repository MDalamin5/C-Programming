#include<stdio.h>
void sawp(int *p, int *q);
int main()
{
    int a=2,b=3;
    printf("Before sawping a=%d, b=%d\n",a,b);
    sawp(&a,&b);
     printf("After sawping a=%d, b=%d\n",a,b);
}
void sawp(int *p, int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
