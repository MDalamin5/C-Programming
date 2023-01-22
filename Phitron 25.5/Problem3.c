#include<stdio.h>
#include<math.h>
int CostValue(char ch);
int main()
{
    char ch[1000];
    scanf("%s",ch);
    int sum=0;
    for(int i=0;ch[i]!=0;i++)
    {
        sum+=CostValue(ch[i]);
    }
    int power=-1;
    for(int i=0;i<=sum/2;i++)
    {
        if(pow(2,i)==sum)
        {
            power=i;
            break;
        }
    }
    if(power>=0)
    {
        printf("YES\ncost = 2^%d",power);
    }
    else
        printf("NO");
}
int CostValue(char ch)
{
    return ch-96;
}
