#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int sum=0;
    int rem=0;

    for(int i=0;i<n;i++)
    {
        rem=array[i]%10;
        sum +=rem;
        rem=0;
    }
    printf("Sum = %d",sum);
}