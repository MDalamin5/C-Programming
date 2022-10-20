#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1+num2)>num3 && (num1+num3)>num2 && (num3+num2)>num1 )
    {
        printf("Yes");
    }

    else
    printf("No");
}