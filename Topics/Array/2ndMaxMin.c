#include<stdio.h>
int main()
{
    int array[5]= {9,7,5,6,8};
    int max=array[0];
    for(int i=0;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    int new_array[max+1];
    for(int i=0;i<max;i++)
    {
        new_array[i]=0;
    }
    //for(int i=1;i<max+1;i++){printf("%d\n",new_array[i]);}
    for(int i=0;i<max;i++)
    {
        new_array[array[i]]=1;
    }
    
}