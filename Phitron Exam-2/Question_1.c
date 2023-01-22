#include<stdio.h>
char CaseConvert(char ch);
int main()
{
    char word[1000];
    char nWORD[1000];
    int i;
    scanf("%s",word);
   for(i=0;word[i]!='\0';i++)
   {
      nWORD[i]= CaseConvert(word[i]);
   }
    nWORD[i]='\0';
   puts(nWORD);
}
char CaseConvert(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch-32;
    }
    else if(ch>='A' && ch<='Z')
    {
        return ch+32;
    }
}
