#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int flag=0;
    //printf("%d",len);
    for(int i=0;i<(len-2)/2;i++)
    {
        if(str[i] != str[len-2-i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

}