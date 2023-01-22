#include<stdio.h>
int is_leapYear(int num);
int is_distrink(int num);
int main()
{
    int year;
    scanf("%d",&year);
    if(is_leapYear(year)==1 && is_distrink(year)==1)
        printf("Hello Beautufull");
    else
        printf("Not Good!");
}
int is_leapYear(int year)
{
    if((year%400)==0 || ((year%4==0) && (year%100!=0)))
        return 1;
    else
        return 0;
}
int is_distrink(int year)
{
    int last_dig;
    int countArr[10]={0,0,0,0,0,0,0,0,0,0};
    while(year!=0)
    {
        last_dig=year%10;
        countArr[last_dig]++;
        year/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(countArr[i]>1)
            return 0;
    }
    return 1;
}
