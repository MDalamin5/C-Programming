#include<stdio.h>
int main()
{
    int array_size,temp;
    printf("Enter the array size: ");
    scanf("%d",&array_size);
    int array[array_size];
    printf("Enter array elements: \n");
    for(int i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<array_size/2;i++)
    {
        temp=array[i];
        array[i]=array[array_size-i-1];
        array[array_size-i-1]=temp;

        
    }

    for(int i=0; i<array_size; i++)
    {
        printf("%d ",array[i]);
    }
}