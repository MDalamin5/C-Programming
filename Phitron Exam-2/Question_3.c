#include<stdio.h>
int DigCheck(char ch);
int main()
{
    char str[1000];
    int presen1=0;
    int presen7=0;
    int presen9=0;
    fflush(stdin);
    scanf("%s",str);
    fflush(stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(DigCheck(str[i])==1)
        {
            presen1=1;
        }
        else if(DigCheck(str[i])==7)
        {
            presen7=1;
        }
        else if(DigCheck(str[i])==9)
        {
            presen9=1;
        }
        else
            continue;
    }
    int count=presen1+presen7+presen9;
    if(count==3)
    printf("Yes");
    else
        printf("No");
}
int DigCheck(char ch)
{
   switch(ch)
   {
   case '1':
    return 1;
    break;
   case '7':
    return 7;
    break;
   case '9':
    return 9;
    break;
   default:
    return 0;
   }
}
