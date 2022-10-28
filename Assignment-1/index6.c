#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    if(num1%num2==0)
    {
        printf("The first number id divisible by the second number.");
    }
    else if(num2%num1==0)
    {
        printf("The second number is divisible by the first number.");
    }
    else 
    {
        printf("None of them divisible by the other.");
    }
    
    
}