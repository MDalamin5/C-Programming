#include<stdio.h>
int main()
{
    int n;
    printf("Enter your array size: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter your array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter how many index: ");
    int no_ind,index,value;
    scanf("%d",&no_ind);

    for(int i=0;i<no_ind;i++)
    {
        printf("Enter index and value: ");
        scanf("%d%d",&index,&value);
        array[index]=array[index]+value;
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}