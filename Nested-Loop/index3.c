#include<stdio.h>
int main()
{
    int n;
    printf("Enter your array size: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter your array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int random=array[0];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(random!=array[i])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        printf("YES");
    }
    else
    printf("NO");
}