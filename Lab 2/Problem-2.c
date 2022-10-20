#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter Three integer number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    int large;
    if(num1 != num2 && num1 != num3)
    {
        if(num1>num2 && num1>num2)
        {
            printf("Number1 is large");
        }

        else if(num2>num1 && num2>num3)
        {
            printf("Number2 Is large");
        }
        else if(num3>num1 && num3>num2)
        {
            printf("Number3 is Large");
        }
    }
    else if(num1==num2 || num1==num3)
    {
        if(num1==num2 && (num1>num3 && num2>num3))
        {
            printf("Number 1 and number 2 are bigger");
        }
        else if(num1==num3 && (num1>num2 && num3>num2))
        {
            printf("Number 1 and number 3 are bigger");
        }

        
    }

    if(num2==num1 || num2==num3)
    {
        
          if(num2==num3 && (num2>num1 && num3>num1))
        {
            printf("Number 2 and number 3 are bigger");
        }

        else if (num2==num3 && (num2>num1 && num3>num1))
        {
            printf("Number 1 and number 3 are bigger");
        }
    }

    


}