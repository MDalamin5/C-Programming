#include<stdio.h>
int main()
{
    long long int a,b,c,s;
    int x;
    scanf("%d",&x);
   
   int array[x];
   long long int missing[x];
   for(int i=0;i<x;i++)
   {
     scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
      missing[i]= s-(a+b+c);
   }
   for(int i=0;i<x;i++)
   {
     printf("%lld\n",missing[i]);
   }
    
   

}