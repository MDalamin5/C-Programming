#include<stdio.h>
int main()
{
    int num;
    printf("Enter Your number: ");
    scanf("%d",&num);
    /*
    int count = 1;
    while (count <= num)
    {
        int result = count*count;
        printf("Number is : %d and Square of the %d is : %d\n",count,count,result);
        count++;
    
    }
    */
    
   for (int  i = 1; i <= num; i++)
   {
     
        printf("Number is : %d and Square of the %d is : %d\n",i,i,i*i);
   }
   
}