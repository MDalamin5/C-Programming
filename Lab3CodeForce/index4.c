#include<stdio.h>
int main()
{
    int n,k,count=0;

    scanf("%d%d",&n,&k);
    int array[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(array[i]>0)
       {
        if(array[i]>=array[k-1])
       {
        count++;
       }
       }
    }
    printf("%d",count);

}