#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int crg[n],total;
    char ch;
    for(int i=0;i<n;i++)
    {
        scanf("%d%c",&crg[i],&ch);
    }
    for(int i=0;i<n;i++)
    {
        if(crg[i]==100)
    {
        crg[i]=0;
    }
    else if(crg[i]>=0 && crg[i]<=60)
    {
        crg[i]= 60+40+(60-crg[i]);
    }
    else if(crg[i]>60 && crg[i]<=80)
    {
        crg[i]=60+(2*(80-crg[i]));
        
    }
    else if(crg[i]>80 && crg[i]<=100)
    {
        crg[i]=(3*(100-crg[i]));
        
    }
    
    }
    for(int i=0;i<n;i++)
    {
        printf("%d minutes\n",crg[i]);
    }
}

