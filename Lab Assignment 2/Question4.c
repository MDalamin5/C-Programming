#include<stdio.h>
void ConsecutiveEven(int num);
int main()
{
    int n;
    int arr[4];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        ConsecutiveEven(arr[i]);
        printf("\n");
    }
}
void ConsecutiveEven(int num)
{
    int quater_num,sum=0,first_value;
    if(num%2==0)
    {
        quater_num=num/4;
    first_value=quater_num-3;
    for(int i=0;i<4;i++)
    {
        printf("%d ",first_value);
        first_value+=2;
    }
    }
}
