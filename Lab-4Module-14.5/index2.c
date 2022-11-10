#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int falg=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='0' || str[i]=='1')
        {
            falg=1;
        }
    }
    if(falg==0)
    {
        printf("NO");
    }
    else
    {
        printf("Yes");
    }
}