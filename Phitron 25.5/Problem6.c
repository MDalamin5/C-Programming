#include<stdio.h>
void addNums(int* p,int* q,int* r);
int main()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    addNums(&n1,&n2,&n3);
}
void addNums(int *p,int *q,int *r)
{
    printf("%d",*p+ *q + *r);
}
