#include<stdio.h>
int is_prime(int num);
void show_pattarn(int num);
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    show_pattarn(n);
}
void show_pattarn(int num)
{
    int k=2;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
           for(int i=k;i<=1000;i++)
           {
               if(is_prime(i)==1)
               {
                   printf("%d ",i);
                   k++;
                   break;
               }
               else
               {
                   k++;
                    continue;
               }
           }
        }
        printf("\n");
    }
}
int is_prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
