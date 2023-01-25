#include<stdio.h>
int get_GCD(int num1,int num2);
int main()
{
    int t,count=0;;
    int n[101];
    int Ai[20][101];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        {
            for(int j=0;j<n[i];j++)
            {
                scanf("%d",&Ai[i][j]);
            }
        }
    }
        for(int j=0;j<n[j];j++)
            {
                for(int k=0;k<n[j];k++)
                {
                    for(int l=0;l<n[j];l++)
                    {
                        if(k!=l)
                        {
                            if(get_GCD(Ai[j][k],Ai[j][l])==1)
                            count++;
                        
                        }
                    }
                }
                printf("%d\n",count); count=0;
            }
}
int get_GCD(int num1,int num2)
{
    int small= num1<num2 ? num1:num2;
    int gcd=0;
    for(int i=small;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
            break;
        }
    }
    return gcd;
}