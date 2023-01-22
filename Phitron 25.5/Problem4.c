#include<stdio.h>
void numsDisplay(int num);
int main()
{
    int num;
    scanf("%d",&num);
    numsDisplay(num);
}
void numsDisplay(int num)
{
    printf("%d ",num);
    if(num==1)
    return 1;
    else
        numsDisplay(num-1);

}
