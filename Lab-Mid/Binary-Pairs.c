#include<stdio.h>
int main()
{
    int t,n;
    char s[1000];
    scanf("%d",&t);
    int count[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        fflush(stdin);
        scanf("%s",s);
        fflush(stdin);
        count[i]=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='0'&&s[j+1]=='1')
            {
                count[i]+=1;
            }

        }

        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='1'&&s[j+1]=='0')
            {
                count[i]+=1;
            }
            
        }
       
    }

    for(int i=0;i<t;i++)
    {
        printf("%d\n",count[i]);
    }
}