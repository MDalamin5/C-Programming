#include<stdio.h>
int find_GCD(int num1,int num2);
int find_LCM(int num1,int num2);
int main()
{
       int num1,num2;
       scanf("%d%d",&num1,&num2);
       int ans=find_GCD(num1,num2);
      // printf("%d %d",num1,num2);
       printf("GCD is: %d\n",ans);
       printf("LCM is: %d",find_LCM(num1,num2));
}
int find_GCD(int num1,int num2)
{
    int gcd;
    for(int i=num1;i>=1;i--)
    {
        if((num1%i==0) && (num2%i==0))
             return i;
           break;
    }
}
int find_LCM(int num1,int num2)
{   /*
    for(int i=num1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            return i;
        }
    }  */
    return (num1*num2)/find_GCD(num1,num2);
}
