#include<stdio.h>
struct Student
{
    char name[30];
    int age;
    double marks;
};
int main()
{
    struct Student cls[2];
    printf("Enter Student Information\n");
    for(int i=0;i<2;i++)
    {
        printf("Enter name: ");
        scanf("%s",cls[i].name);
        fflush(stdin);
        printf("Enter age: ");
        scanf("%d",&cls[i].age);
        printf("Enter the maeks: ");
        scanf("%lf",&cls[i].marks);
        printf("\n");

    }
    for(int i=0;i<2;i++)
    {
        if(cls[i].age%2==0)
        {
            printf("Name : %s\n",cls[i].name);
            printf("Age: %d\n",cls[i].age);
            printf("Marks: %.2lf\n",cls[i].marks);
        }
    }
}
