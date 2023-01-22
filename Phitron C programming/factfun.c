#include<stdio.h>
int fact(int x);
int main()
{
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);
   int result= fact(n)/fact(n-r);
    printf("Your result is : %d",result);
}

int fact(int x)
{
    int fac=1;
    for(int i=1;i<=x;i++)
    {
        fac *=i;
    }
    return fac;
}


