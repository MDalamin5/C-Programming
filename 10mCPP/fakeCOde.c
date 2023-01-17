#include<stdio.h>
int main()
{
    int n,sum=0;
    int storeArr[99];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        storeArr[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2 ==1)
        {
            sum+=storeArr[i]+storeArr[i+1]+storeArr[i+2];
        }
        else
        {
            sum-=storeArr[i]+storeArr[i+1]+storeArr[i+2];
        }
        i+=2;
    }
    printf("%d",sum);
}
