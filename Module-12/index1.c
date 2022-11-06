#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    puts(name);
    while(name != '\0')
    {
        
    }
}