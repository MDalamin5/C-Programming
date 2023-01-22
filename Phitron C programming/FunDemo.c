#include<stdio.h>
int GCD(int n1,int n2);
int main()
{

  int num1,num2;
  printf("Enter two number: ");
  scanf("%d%d",&num1,&num2);
    int gcd= GCD(num1,num2);
    printf("the GCD is: %d",gcd);
}

int GCD(int num1,int num2)
{
    int ans;
   for(int i=num1;i>=1;i--)
   {
       if((num1%i==0)&&(num2%i==0))
       {
           ans=i;
           break;
       }
   }
   return ans;m
}


