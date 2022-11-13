#include<stdio.h>
int main()
{
    int a[]={12,7,9,1,3,73,11,15,62,19,4};
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<11;i++)
    {
        printf("%d ",a[i]);
    }
}