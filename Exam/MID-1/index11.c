#include<stdio.h>
int main()
{
    int matrix[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int flag=0;
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+matrix[i][j];
        }
        if(sum!=15)
        {
            flag=1;
            break;
        }
        sum=0;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+matrix[j][i];
        }
        if(sum!=15)
        {
            flag=1;
            break;
        }
        sum=0;
    }
    int sum1=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+matrix[i][j];
            }
            
        }
        
        
    }
    if(sum1!=15)
    {
        flag=1;
    }

    int sum2=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==2)
            {
                sum2=sum2+matrix[i][j];
            }
            
        }
        
        
    }
    if(sum2!=15)
    {
        flag=1;
    }



    if(flag==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }


}