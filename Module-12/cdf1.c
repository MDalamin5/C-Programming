#include<stdio.h>
#include<string.h>
int main()
{
    char name[40];
    fgets(name,sizeof(name),stdin);
    int len= strlen(name);
    //printf("%d",len-1);
    if(len>10)
    {
        printf("%c%d%c",name[0],len-2,name[len-2]);
    }
    else
    puts(name);
}