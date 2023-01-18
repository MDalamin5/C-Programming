#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int* ptr;

    ptr = (int*) malloc(n*sizeof(int));
    printf("%p\n",ptr);
    if(ptr==NULL)
        printf("Meamory location faild");
    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",ptr+i);
        }
        for(int i=0; i<n; i++)
        {
           printf("%d, ",*(ptr+i));
        }
    }
    n=10;
    ptr = realloc(ptr,(n)*sizeof(int));
    if(ptr==NULL)
    {
        printf("Update your SSD");
    }
    else
    {
        for(int i=5;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
         printf("%p\n",ptr);
        for(int i=0; i<n; i++)
        {
           printf("%d ",*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}
