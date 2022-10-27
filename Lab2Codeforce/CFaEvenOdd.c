#include<stdio.h>
int main()
{
    int tot_num, key_n;
    scanf("%d%d",&tot_num,&key_n);

    int even,odd,pos;

    if(tot_num%2!=0)
    {
        odd= (tot_num/2)+1;
        even=tot_num/2;
    }
    else
    {
        odd= (tot_num/2);
        even=tot_num/2;
    }

    if(key_n>odd)
    {
        pos=key_n-odd;
        printf("%d",2*pos);
    }
    else
    {
        printf("%d",(2*key_n)-1);
    }

    

}