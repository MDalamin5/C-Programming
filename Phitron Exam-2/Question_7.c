#include<stdio.h>
double get_median(int arr[],int size);
void sortArr(int arr[],int size);
int main()
{
    int arr_size;
    int arr[1000];
    scanf("%d",&arr_size);
    for(int i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sortArr(arr,arr_size);
    double median= get_median(arr,arr_size);
    printf("Median is = %.2lf\n",median);
}

void sortArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
double get_median(int arr[],int size)
{
    if(size%2!=0)
    {
        return arr[(size/2)];
    }
    else
    {
        double res= arr[(size-1)/2] + arr[((size-1)/2)+1];
        return res/2;
    }
}
