#include<stdio.h>
void nth_value(int arr[],int nth);
int main()
{
    int index=0;
    int element[1000];
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            element[index]=i;
            index++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            element[index]=i;
            index++;
        }
    }
    for(int i=0;i<index;i++)
    {
        printf("%d ",element[i]);
    }
    nth_value(element,k);
}
void nth_value(int arr[],int nth)
{
    printf("\nThe %dth element in this sequence is %d",nth,arr[nth-1]);
}
