#include<stdio.h>
int calculator(char ch,int num1,int num2);
int main()
{
    char ch;
    int num1,num2;
    printf("Enter two integer number: ");
    scanf("%d%d",&num1,&num2);
    fflush(stdin);
    printf("Enter your operator : ");
    scanf("%c",&ch);
    int result = calculator(ch,num1,num2);
    printf("%d",result);
}
int calculator(char ch,int num1,int num2)
{
    switch(ch)
    {
    case '+':
        return num1+num2;
        break;
    case '-':
        return num1-num2;
        break;
    case '*':
        return num1*num2;
        break;
    case '/':
        return num1/num2;
        break;
    }
}
