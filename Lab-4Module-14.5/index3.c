#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

 char str[50];
 scanf("%s",str);
 int sum=0;
 for(int i=0;str[i]!='\0';i++)
 {
    sum+=str[i]-96;
 }
 //printf("%d\n",sum);


    
   if(ceil(log2(sum))==floor(log2(sum)))
    {
        printf("Yes\n");
        printf("cost = 2^%d",(int)ceil(log2(sum)));
    }
    else
    {
        printf("NO");
    }
    

}