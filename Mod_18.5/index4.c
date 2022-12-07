#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    for(int m=0;str[m]!='\0';m++)
    {
        for(int i=0;i<strlen(str);i++)
    {
        for(int j=i+1;j<strlen(str);j++)
        {
            if(str[j]==str[i])
            {
                for(int k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    }
    printf("%s",str);
}