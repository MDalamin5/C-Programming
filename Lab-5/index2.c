#include<stdio.h>
int main()
{
    int array[5]={5,3,88,2,1};
    int temp;
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5-1;i++)
    {
        if(array[i]>array[i+1])
        {
            temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
    }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }

}