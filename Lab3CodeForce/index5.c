#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[2000005];
    
        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }

        int move=0;
        for(int i=1;i<n;i++)
        {
            if(array[i]<array[i-1])
            {
                move+= (array[i-1]-array[i]);
                array[i]=array[i-1];
            }
        }
        printf("%d",move);
    

}