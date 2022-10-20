#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the student mark: ");
    scanf("%d",&mark);

    if(mark>=80 && mark<=100)
    {
        printf("A+");
    }
    else if (mark>=70 && mark <=79)
    {
        printf("A");
    }
    else if (mark>=60 && mark <=69)
    {
        printf("A-");
    }
    else if (mark>=50 && mark <=59)
    {
        printf("B");
    }
    else if (mark>=0 && mark <=32)
    {
        printf("F");
    }

}