#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    int array[n];
    int sum=0,flag=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    for(int i=0;i<n;i++)
    {
        if(array[i]%2 !=0)
        {
            sum=sum+array[i];
        }
    }
    if(sum%2==0)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }

}