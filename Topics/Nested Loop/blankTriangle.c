#include<stdio.h>
int main()
{
    int row;
    printf("Enter the value of row: ");
    scanf("%d",&row);
    for(int i=1; i<=row;i++)
    {
        for(int j=1; j<=i;j++)
        {
            if(j==1 || i==j || i==row)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}