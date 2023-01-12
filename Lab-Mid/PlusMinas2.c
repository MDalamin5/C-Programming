#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    char ch[101];
    scanf("%s",ch);
    int max=1;
    int last_amount=1;

    for(int i=0;ch[i]!='\0';i++)
    {
      if(ch[i]!=ch[i+1])
      {
            
            if(last_amount<=max)
            {
                last_amount=max;
                max=1;
            }
      }
      else
      {
        max++;
      }
    }

    printf("%d",last_amount);

    
}