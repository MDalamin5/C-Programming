#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of N: ");
    scanf("%d",&num);
    
    if(num>0)
    {
        for(int i=1; i<=num; i++)
    {
        printf(" %d",i);

    }
    }
    else if(num<0)
    {
        for(int i=1; i>=num; i--)
    {
        printf(" %d",i);

    }
    }
    


    


    return 0;
}