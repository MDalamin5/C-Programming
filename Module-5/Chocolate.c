#include<stdio.h>
int main()
{
    int chocolate;
    int extra_c,rem_c,total_c;
    printf("How many chocolate You are bought: ");
    scanf("%d",&chocolate);
    total_c=chocolate;
    while (chocolate >= 4)
    {
        extra_c= chocolate/4;
        rem_c= chocolate%4;
        total_c= total_c+extra_c;
        chocolate=extra_c+rem_c;
    }

    printf("%d",total_c);
    
}
 