#include<stdio.h>
int main()
{
    int n;
    printf("ENter the value of n: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int coutn=1;
    for(int i=0; i<n;i++)
    {
        printf("%d - ",coutn);
        coutn++;
        for(int j=0;j<n;j++)
        {
            if(array[i]!=array[j])
            {
                printf("%d ",array[j]);
            }
        }
        printf("\n");
    }
}