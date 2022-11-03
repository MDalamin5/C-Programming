#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int flag=0,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<array[i];j++)
        {
            if(array[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
        }
        flag=0;
    }
    printf("%d\n",count);
    
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<=sqrt(array[i]);j++)
        {
            if(array[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",array[i]);
        }
        flag=0;
    }
}