#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int a,b;
    int term=0;
    scanf("%s",ch);
    fflush(stdin);
    scanf("%d%d",&a,&b);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='+')
        {
            term+=a+b;
        }
        else if(ch[i]=='*')
        {
            term+=a*b;
        }
    }
    printf("%d",term);
}