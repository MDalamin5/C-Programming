#include<stdio.h>
#include<string.h>
int main()
{
    char str1[102];
    char str2[102];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    int len=strlen(str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=32+str1[i];
        }
        
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        if(str2[i]>='A' && str2[i]<='Z')
        {
            str2[i]=32+str2[i];
        }
        
    }
    int flag=0;
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]>str2[i])
        {
            printf("1");
            flag=1;
            break;
        }
        else if(str1[i]<str2[i])
        {
            printf("-1");
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("0");
    }

    
}