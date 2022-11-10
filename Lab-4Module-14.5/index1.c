#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    
    int m;
    scanf("%d",&m);
    char n[m][50];
    for(int i=0;i<m;i++)
    {
        scanf("%s",n[i]);
    }
    for(int i=0;i<m;i++)
    {
       printf("%s ",n[i]);
    }
    return 0;
}