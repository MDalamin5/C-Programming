#include<stdio.h>
int main()
{
    char str[101];
    int arr[130]={0};
    int n,count=0;
    scanf("%d",&n);
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        arr[str[i]]++;
    }
    for(int i=96;i<130;i++)
    {
        if(arr[i]==1)
        count++;
    }
    printf("%d",count);

}