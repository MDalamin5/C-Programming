#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    int large = num1>num2 ? num1:num2;
    if(num1==num2)
    {
        printf("Both are equal");
    }
   else
   {
     printf("THe large number is: %d",large);
   }
    
}