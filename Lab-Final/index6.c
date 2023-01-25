#include<stdio.h>
int isPrime(int num);
int main()
{
    int t;
    int L[101];
    int R[101];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&L[i],&R[i]);
    }
    for(int i=0;i<t;i++)
    {
        for(int j=L[i];j<=R[i];j++)
        {
            if(isPrime(j)==1)
            printf("%d ",j);
        }
        printf("\n");
    }
}
int isPrime(int num)
{
    if(num==1)
    return 1;
    else
    {
        int flag=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if(flag==1)
    return 1;
    else
    return 0;
    }
}