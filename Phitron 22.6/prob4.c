#include<stdio.h>
void sort(int arr[],int n);
int main()
{
    int n;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   int arr[4];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   sort(arr,n);
}
void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
