
#include<stdio.h>
int binary_check(char ch[]);
int main()
{
    char inpute[100];
    printf("Enter your input what you are think: ");
    scanf("%s",&inpute);
    if(binary_check(inpute)==0)
        printf("YES");
        else
            printf("NO");
}
int binary_check(char ch[])
{
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!='0' && ch[i]!='1')
            return 1;
        break;
    }
    return 0;
}
