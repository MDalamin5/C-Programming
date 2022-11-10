#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int array[15];
    int term;
    for(int i=0;i<15;i++)
    {
        array[i]= pow(2,i);
    }

    for(int i=0;i<15;i++)
    {
       printf("%d ",array[i]);
    }
}