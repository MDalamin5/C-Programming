#include<stdio.h>
int main()
{
    int array[5];
    printf("Enrter array elements: ");

    for(int i=0; i<5; i++)
    {
        printf("\nEnter %d elements: ",i+1);
        scanf("%d",&array[i]);
    }

    int max=array[0];
    for(int i=0;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("%d",max);
}