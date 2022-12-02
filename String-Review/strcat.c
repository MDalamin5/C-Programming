#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name[50]="Alamin";
    char name2[]="Alaminj";
   // strcat(name,name2);
    //puts(name);
    strncpy(name,name2,4);
    puts(name);
    strcpy(name,name2);
    printf("\n%s\n",strchr(name,'m'));
    puts(name);
    return 0;
}