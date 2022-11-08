#include<stdio.h>
int main()
{
    int arra[]={4,5,6,7,8,1};
    int temp;
    for(int i =0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arra[j]>arra[j+1])
            {
                 temp=arra[j];
                arra[j]=arra[j+1];
                arra[j+1]=temp;

            }
        }
        for(int i=0;i<6;i++)
        {
            printf("%d ",arra[i]);
        }
    }

}