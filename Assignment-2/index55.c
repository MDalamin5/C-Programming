#include<stdio.h>
int chaculateCharge(int x);
int main()
{
    int n;
    scanf("%d",&n);
    int charge[n];
    char ch;
    for(int i=0;i<n;i++)
    {
        scanf("%d%c",&charge[i],&ch);
    }
    for(int i=0;i<n;i++)
    {
        charge[i]=chaculateCharge(charge[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d minutes\n",charge[i]);
    }
}

int chaculateCharge(int crg)
{
    int total;
    if(crg==100)
    {
        return 0;
    }
    else if(crg>=0 && crg<=60)
    {
        return 60+40+(60-crg);
    }
    else if(crg>60 && crg<=80)
    {
        total=60+(2*(80-crg));
        return total;
    }
    else if(crg>80 && crg<=100)
    {
        total=(3*(100-crg));
        return total;
    }
    else
    return 0;
}
