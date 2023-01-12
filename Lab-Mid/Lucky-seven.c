#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    char s[21];
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)

    {
        fflush(stdin);
        scanf("%s",s);
        fflush(stdin);
        int falg=0;
        
        
        for(int j=0;j<(strlen(s)-1)/2;j++)
        {
            if(s[j]!=s[strlen(s)-1-j])
            {
                falg=1;
            }

        }
        if(falg==0)
        {
            /*
            if(strlen(s)>=7)
            {
                //printf("%c%lu%c",s[0],(strlen(s)-3),s[strlen(s)-1]);

            }
            else
            {
                printf("%s",s);
            }
                */
               arr[i]=2;
              //temp[i]=s[i];
              //len[i]=strlen(s);

               
        }
        else
        {
            arr[i]=3;
        }

        falg=0;
    }
     
    for(int i=0;i<t;i++)
    {
        if(arr[i]==2)
        {
            printf("\nPal");
            
        }
        else
        printf("\nNot");
    }
}