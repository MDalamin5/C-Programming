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

    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even==1)
    {
        for(int i=0;i<n;i++)
        {
            if(array[i]%2==0)
            {
                printf("%d",i+1);
            }
        }
    }
    else if(odd==1)
    {
        for(int i=0;i<n;i++)
        {
            if(array[i]%2!=0)
            {
                printf("%d",i+1);
            }
        }
    }

}