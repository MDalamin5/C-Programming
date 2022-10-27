#include<stdio.h>
int main()
{
    int F_H_P;
    int step,rem,sum=0;
    scanf("%d",&F_H_P);
    if(F_H_P<=5)
    {
        printf("%d",1);
    }

    else if(F_H_P>5)
    {
        if(F_H_P%5 !=0)
        {
            step= F_H_P/5;
            
            sum=step+1;
            printf("%d",sum);
        }
        else if(F_H_P%5==0)
        {
            printf("%d",F_H_P/5);
        }
    }
}