#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    int temp,k;
    for(int i=0; i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Which smallest nmber you want: ");
    scanf("%d",&k);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("%d",array[k-1]);
}