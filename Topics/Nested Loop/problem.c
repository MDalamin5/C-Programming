#include<stdio.h>
int main()
{
    int sum=0;
    int sub[3];
    float avg;
    for(int i=1;i<=10; i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("Enter the Subject-%d Marks: ",j+1);
            scanf("%d",&sub[i]);
            sum=sum+sub[i];
            
        }
        avg=sum/3.0;
        printf("Avg number is: %.2f",avg);
        sum=0;
        printf("\n");
    }
    
}