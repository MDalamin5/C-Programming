#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;j<strlen(str)-1;j++)
        {
            if(str[j+1]<str[j])
            {
                char temp=str[j+1];
                str[j+1]=str[j];
                str[j]=temp;
            }
        }
    }
    puts(str);
}
