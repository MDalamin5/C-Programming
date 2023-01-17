#include<stdio.h>
int check_Prime(int num);
double get_averageEven_dig(int arr[],int size,int* ptr);
int main()
{
    int n;
    int nums[1000];
    int primeNum;
    int* ptrPrime;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    ptrPrime=&primeNum;
    double avg= get_averageEven_dig(nums,n,&primeNum);
    printf("Prime numbers: %d",primeNum);
    printf("\nAverage of all even integers: %.2lf",avg);
}
double get_averageEven_dig(int arr[],int size,int* ptr)
{
    int count=0,Esumm=0,evenNum=0;
    for(int i=0;i<size;i++)
    {
        if(check_Prime(arr[i])==1)
        {
            count++;
        }
        if(arr[i]%2==0)
        {
            Esumm+=arr[i];
            evenNum++;
        }
    }
    *ptr=count;
    return Esumm/evenNum;
}
int check_Prime(int num)
{
    if(num<2)
        {
            return 0;
        }
    else
    {
        for(int i=2;i<=num/2;i++)
        {
           if(num%i==0)
            return 0;
        }
    }
    return 1;
}
