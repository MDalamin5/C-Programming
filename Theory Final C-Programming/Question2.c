#include<stdio.h>
void arrPrint(int arr[],int size);
int main()
{
    int n;
    int fib_num[1000];
    int fib_index=0;
    int first_num=0,secend_num=1,count=0,fibnacci_num;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(count<=1)
           {
                fibnacci_num=count;
                count++;
           }
           else
           {
               first_num=secend_num;
               secend_num=fibnacci_num;
               fibnacci_num=first_num+secend_num;
           }
          fib_num[fib_index++]=fibnacci_num;
    }
    arrPrint(fib_num,fib_index);
}
void arrPrint(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d ",arr[size-1]);
}
