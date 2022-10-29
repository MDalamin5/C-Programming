#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2;
    printf("Enter two numer: ");

    scanf("%d%d",&num1,&num2);
    int flag=0;
    for(int i=2; i<=sqrt(num1); i++)
    {
        if(num1%1==0)
        {
            flag=1;
        }
    }

    
}