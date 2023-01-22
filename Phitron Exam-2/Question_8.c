#include<stdio.h>
#include<string.h>
char Sift_Char(char ch,int inc_index);
int main()
{
    char word[1000];
    char nWORD[1000];
    int i,inc_index;
    scanf("%s",word);
    scanf("%d",&inc_index);
    for(i=0;word[i]!='\0';i++)
    {
        nWORD[i]=Sift_Char(word[i],inc_index);
    }
    printf("%d\n",i);
    nWORD[i]='\0';
    printf("%s",nWORD);
}
char Sift_Char(char ch,int inc_index)
{
    int sum=0,rem=0;
   if(ch+inc_index>123)
   {
       sum= ch+inc_index;
       rem=sum-123;
       return 'a'+rem;
   }
   else
    return ch+inc_index;
}
