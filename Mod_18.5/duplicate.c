#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i+1;s[j]!='\0';j++)
        {
            if((s[i]>='a' && s[i]<='z') && (s[j]>='a' && s[j]<='z'))
            {
                if(s[i]==s[j])
                {
                    s[j]='1';
                }
            }
        }
    }

    

    for(int i=0;s[i] !='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            printf("%c",s[i]);
        }
    }
}