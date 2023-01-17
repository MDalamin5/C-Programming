#include<stdio.h>
#include<string.h>
char BrknKeybrd(char ch);
int main()
{
    char str[1000];
    char nSTR[1000];
    int i,k;
    scanf("%s",str);
    nSTR[0]=str[0];
    for( i=1,k=1;str[i]!='\0';i++)
    {
        if(i%2==0)
        {
            nSTR[k]=BrknKeybrd(str[i]);
            k++;
        }
        else if(i%2==1)
        {
            nSTR[k]=BrknKeybrd(str[i]);
            k++;
            nSTR[k]=BrknKeybrd(str[i]);
            k++;
        }
    }
    nSTR[k]='\0';
    puts(nSTR);
}
char BrknKeybrd(char ch)
{
    return ch;
}
