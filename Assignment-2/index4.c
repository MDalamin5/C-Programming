#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int student[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&student[i]);
    }
    int max=student[0];
    for(int i=1;i<n;i++)
    {
        if(student[i]>max)
        {
            max=student[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        student[i]=max-student[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",student[i]);
    }
}