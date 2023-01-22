#include<stdio.h>
int is_vowel(char ch);
int main()
{
    char ch;
    ch=getchar();
    getchar();
    if(is_vowel(ch)==1)
        printf("This charecter is vowel.\n");
        else
            printf("This is not a vowel.\n");
}
int is_vowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i')
        return 1;
    else
        return 0;
}
