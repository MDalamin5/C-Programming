#include<stdio.h>
int main()
{
    int arr[5]= {1,2,3,4,5},i=5,j;
    while(i>=1)
    {
        arr[i-1]-=i;
        while(1)
        {
            arr[i-1]+=i;
            break;
        }
        i-=1;
    }
    for(j=0; j<5; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}