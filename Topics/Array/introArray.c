#include<stdio.h>
int main()
{
    int array[10];
    printf("Enrter array elements: ");

    for(int i=0; i<4; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0; i<4; i++)
    {
        printf("%d\n",array[i]);
    }
}