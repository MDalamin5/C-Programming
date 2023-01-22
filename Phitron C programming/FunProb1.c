#include<stdio.h>
void numPrint(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    numPrint(num);
}
   void numPrint(int num)
{
    if(num<0)
    {

    }
    else if(num >0)
    {
         for(int i=num;i>=-num;i--)
       {
           printf("%d ",i);
       }
    }
    }

