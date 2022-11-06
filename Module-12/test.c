#include<stdio.h>
int main()
{
    char ch[50];
    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
    }
    
    return 0;
}