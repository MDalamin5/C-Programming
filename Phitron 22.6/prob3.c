#include<stdio.h>
void addWord(char ch[],int n);
int main()
{
    char word[20][100];
    int n;
    printf("how many word you want to add: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",word[i]);
        fflush(stdin);
    }
addWord(word,n);
}
void addWord(char ch[],int n)
{
    for(int i=0;i<n;i++ )
    {
        printf("%s ",ch[i]);
    }
}
