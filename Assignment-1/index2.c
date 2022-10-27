#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("Enter 4 distinct integer: ");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    if(num1>num2 && num1>num3 && num1>num4)
    {
        printf("Largest = %d",num1);
    }
   else if(num2>num1 && num2>num3 && num2>num4)
    {
        printf("Largest = %d",num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4)
    {
        printf("Largest = %d",num3);
    }
    else if(num4>num1 && num4>num2 && num4>num3)
    {
        printf("Largest = %d",num4);
    }
    else
    printf("Invalid Input");

        printf("\n");

    if(num1<num2 && num1<num3 && num1<num4)
    {
        printf("Smallest = %d",num1);
    }
    else if(num2<num1 && num2<num3 && num2<num4)
    {
        printf("Smallest = %d",num2);
    }
    else if(num3<num1 && num3<num2 && num3<num4)
    {
        printf("Smallest = %d",num3);
    }
    else if(num4<num1 && num4<num3 && num4<num2)
    {
        printf("Smallest = %d",num4);
    }
    else
    printf("Invalid Input");
}