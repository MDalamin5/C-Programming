#include<stdio.h>
void EvenNumPrint(int num);
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    EvenNumPrint(n);
}
void EvenNumPrint(int num)
{
    for(int i=2;i<=num;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
