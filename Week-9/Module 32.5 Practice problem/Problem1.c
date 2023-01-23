#include<stdio.h>
int power(int n, int m);
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("The Result is: %d",power(n,m));
}
int power(int n, int m)
{
    if(m==0)
    return 1;
    return n*power(n,m-1);
}