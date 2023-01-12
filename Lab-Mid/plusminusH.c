#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    char ch[101];
    scanf("%s",ch);
    int count=1;
    int max=1;

    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
        {
            count++;
            if(max<=count)
            {
                max=count;
            }
        }
        else if(ch[i]!=ch[i+1])
        {
            count=1;
        }
    }

    printf("%d",max);
}