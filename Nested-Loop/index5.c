#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int flag=0;
    printf("Enter your tergate: ");
    int targer;
    scanf("%d",&targer);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(targer==(array[i]+array[j]))
            {
                flag=1;
                break;
            }
        }
    }

    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}