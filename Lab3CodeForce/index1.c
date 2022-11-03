#include<stdio.h>
int main()
{
    int n;
    int num1,num2,num3;
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&num1,&num2,&num3);
        if((num1+num2+num3)>=2)
        {
            count++;
        }
    }
    printf("%d",count);
}