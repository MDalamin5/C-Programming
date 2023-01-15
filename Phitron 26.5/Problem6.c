#include<stdio.h>
int charEvenCheck(char ch);
int main()
{
    char str[1000];
    char newSTR[1000];
    int i;
    scanf("%s",str);
    for( i=0;str[i]!='\0';i++)
    {
        if(charEvenCheck(str[i])==1)
            newSTR[i]=str[i]-32;
        else
            newSTR[i]=str[i];
    }
    newSTR[i]='\0';
    puts(newSTR);
}
int charEvenCheck(char ch)
{
    int charInt=ch;
    if(charInt%2==0)
        return 1;
    else
        return 0;
}
