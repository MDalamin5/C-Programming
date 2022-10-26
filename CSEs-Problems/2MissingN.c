#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    int array[num-1];
    int contain[num];
    int random_n=1;
    int missing;
    for(int j=0; j<num; j++)
    {
        contain[j]=random_n;
        random_n++;
    }
    for(int i=0; i<num-1; i++)
    {
       printf("Enter input in your range: ");
        scanf("%d",&array[i]);
    }
        int count=0;
    for(int i= 0; i<num; i++)
    {
        for(int j= 0; j<num; j++)
        {
            if(contain[i]==array[j])
            {
                continue;
            }
            else
            {
                count=contain[j];
            }
        }
    }
    printf("%d",count);
    

    
}