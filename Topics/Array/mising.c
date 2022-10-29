#include<stdio.h>
int main()
{
    int n,x;
    int array[2000001];
printf("Enter the value of n: ");
scanf("%d",&n);
     
    for(int i=1;i<n;i++)
    {
        printf("Eneter your elements: ");
        scanf("%d",&x);
        array[x]=1;
    }

    for(int i=1; i<=n; i++)
    {
        if(array[i]==0)
        {
            printf("mising number is: %d",i);
            break;
        }
    }
}