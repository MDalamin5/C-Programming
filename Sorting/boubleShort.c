#include<stdio.h>
int main()
{
    int arr[5]={55,4,8,6,9};
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)

        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}