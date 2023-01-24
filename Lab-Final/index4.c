#include<stdio.h>
int main()
{
    int t;
    int num[6];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<t;i++)
    {
        while (num[i]!=0)   
        {
            int rem=num[i]%10;
            printf("%c",rem+64);
            num[i]/=10;
        }
        printf("\n"); 
    }
}