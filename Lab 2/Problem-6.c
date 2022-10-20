#include<stdio.h>
int main()
{
    int num,num2;
    printf("Enter your mark: ");
    scanf("%d %d",&num,&num2);
    int result= num+num2;

    if(result>=100)
    {
        printf("Yes");
    }
    else
    printf("NO");
    
}