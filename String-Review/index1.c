#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name1[]= "farhanferoz";
    char name2[]= "farhaNferoz";
    
    printf("%d\n",strncmp(name1,name2,5));

    
    return 0;
}