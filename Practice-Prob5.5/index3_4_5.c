#include<stdio.h>
int main()
{
    
    int num;
    printf("Enter the value of N: ");
    scanf("%d",&num);

    for(int i=2; i<=num; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        
    }

    printf("\n Enter value for no-4\n");
    int n,m;
    printf("Enter the value of N and M: ");
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        if(i%m==0)
        {
            printf("%d ",i);
        }
    }

    //print all divisor of N
    


}