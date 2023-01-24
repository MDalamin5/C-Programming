#include<stdio.h>
int FIFA(int year);
int main()
{
    int year;
    scanf("%d",&year);
    if(FIFA(year)==1)
    printf("Yes");
    else
    printf("No");
}
int FIFA(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
    return 1;
    else
    return 0;
}