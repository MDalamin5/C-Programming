#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr = (int) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
}
