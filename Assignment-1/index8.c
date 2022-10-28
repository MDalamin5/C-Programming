#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int large = num1>num2 ? num1:num2;

    int flag=1;
    while(flag)
    {
        if((large%num1==0) && (large%num2==0))
        {
            printf("The LCM of %d and %d is %d.",num1,num2,large);
            flag=0;
        }
        large++;
    }
    
}