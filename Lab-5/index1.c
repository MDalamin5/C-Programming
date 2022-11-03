#include<stdio.h>
int main()
{
    int n;
    printf("How many Number you want to print: ");
    scanf("%d",&n);
    int count=0;
    int first=0,second=1,febo;
    for(int i=0;i<n;i++)
    {
        if(count<=1)
        {
            printf("%d ",count);
            count++;
        }
        else
        {
            febo=first+second;
            printf("%d ",febo);
            first=second;
            second=febo;

        }
    }
}