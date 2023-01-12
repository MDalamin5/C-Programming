#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char sign[110];
    scanf("%s",sign);
    int pcount=1;
    int ncount=1;
    int count=0;

    for(int i=0;sign[i]!='\0';i++)
    {
        if((sign[i]=='+' && sign[i+1]=='-') || (sign[i]=='-' && sign[i+1]=='+'))
        {
            count++;
            
        }
    }
    for(int i=0;sign[i]!='\0';i++)
    {
        
        if(count<=2)
        {
            if((sign[i]=='+' && sign[i+1]=='-') || (sign[i]=='-' && sign[i+1]=='+'))
        {
            continue;   
        }

        else if(sign[i]=='+' && sign[i+1]=='+')
        {
            pcount+=1;
            
        }

       else if(sign[i]=='-' && sign[i+1]=='-')
        {
            ncount+=1;
           
        }
        }

        else
        {
            if((sign[i]=='+' && sign[i+1]=='-') || (sign[i]=='-' && sign[i+1]=='+'))
        {
            pcount=1;
            ncount=1;
            
        }

        else if(sign[i]=='+' && sign[i+1]=='+')
        {
            pcount+=1;
            
            
        }

       else if(sign[i]=='-' && sign[i+1]=='-')
        {
            ncount+=1;
           
        }
        }
        
    }


    int large= (pcount>ncount) ? pcount:ncount;
    printf("%d",large);
}