#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sortStr(char ch[]);
int main()
{
    char str[1000];
    scanf("%s",str);
    sortStr(str);
    puts(str);
}
void sortStr(char ch[])
{
    for(int i=0;i<strlen(ch);i++)
    {
        for(int j=0;j<strlen(ch)-1;j++)
        {
            if(ch[j+1]>ch[j])
            {
                char temp=ch[j+1];
                ch[j+1]=ch[j];
                ch[j]=temp;
            }
        }
    }
}
