#include<stdio.h>
int main()
{
    int n,m;
    int count=0;
    printf("Enter the valuel of N and M: ");
    scanf("%d%d",&n,&m);

      int temp=n;
    
        if(n<=m)
        {
            while(n<=m )
        {
            printf("%d ",n);
            n++;
            if(n==24)
            {
                n=0;
            }
        }
        }

        else if(n>=m)
        {
            do{
                printf("%d ",n);
                n++;
                if(n==24)
                {
                    n=0;
                    for(int i=0 ; i<=m;i++)
                    {
                        printf("%d ",i);
                    }
                }
            }while(n>=m);
        }
    
}