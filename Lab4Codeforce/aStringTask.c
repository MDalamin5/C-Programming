#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char new_str[100];
    int pos;
    int len;
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(int i=0;i<len-1;i++)
    {
         if(str[i]>='A' && str[i]<='Z')
         {
            str[i] = str[i]+32;
         }

         if(!(str[i]=='i' ||str[i]=='a'||str[i]=='o'||str[i]=='u'|| str[i]=='e'))
           {
                printf(".%c",str[i]);
           }

    }
   
    

}