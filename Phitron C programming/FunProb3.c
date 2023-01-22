#include<stdio.h>
void sum(int num1,int num2);
int main()
{
        int n;
        printf("Enter the value of array: ");
        scanf("%d",&n);
        int num[n];
        printf("Enter the array elements: \n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        sum(num[0],num[n-1]);
}
void sum(int num1,int num2)
{
    printf("Sum = %d%d",num1/1000,num2%10);

}
