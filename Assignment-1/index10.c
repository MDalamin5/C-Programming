#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    
    int flag=0;
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }
    
}