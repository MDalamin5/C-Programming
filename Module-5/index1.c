#include<stdio.h>
int main()
{
    int num;
    printf("Enter the totoal Pasherger Number: ");
    scanf("%d",&num);
    int sum= 0,weight;

    for(int i = 1; i<=num; i++)
    {
        printf("Enter %d passernger weight: ",i);
        scanf("%d",&weight);
        sum= sum+weight;
    }
    printf("Weight is: %d",sum);
}