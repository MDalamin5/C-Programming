#include<stdio.h>
int main()
{
    int n,h;
    printf("ENter the no. of friend and height: ");
    scanf("%d%d",&n,&h);
    int hight[n];

    int sum=0;
    printf("ENter %d friend height: ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&hight[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(hight[i]<=h)
        {
            sum=sum+1;
        }
        else
        {
            sum=sum+2;
        }
    }
    printf(" %d",sum);
}