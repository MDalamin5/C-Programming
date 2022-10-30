#include<stdio.h>
int main()
{
    int value;
    printf("Enter the value of N: ");
    scanf("%d",&value);

    for(int i=0;i<value;i++)
    {
        for(int j=0; j<2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}