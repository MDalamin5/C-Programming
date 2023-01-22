#include<stdio.h>
void printNum(int start,int n);
int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d",&n);
    printNum(1,n);
}
void printNum(int start,int n)
{
    //printf("I am in function.");
    if(start>n)
    return;
    printf("%d ",start);
    start++;
    printNum(start,n);
}