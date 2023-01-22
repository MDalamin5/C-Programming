#include<stdio.h>
int main()
{
    char ch[1000];
    int arr[130]={0};
    int index;
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        index=ch[i];
        arr[index]++;
    }
    for(int i=0;i<130;i++)
    {
        if(arr[i]>0)
            printf("%d ",arr[i]);
    }
    printf("\n");
     for(int i=0;i<130;i++)
    {
        if(arr[i]>0)
            printf("%c",i);
    }
    printf("\n");

    for(int i=0;i<130;i++)
    {
        for(int j=0;j<130-1;j++)
        {
            if(arr[j+1]>arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
     for(int i=0;i<130;i++)
    {
        if(arr[i]>0)
            printf("%d ",arr[i]);
    }
     for(int i=0;i<130;i++)
    {
        if(arr[i]>0)
            printf("%c",i);
    }

}
