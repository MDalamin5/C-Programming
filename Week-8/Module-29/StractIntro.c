#include<stdio.h>
struct student{
    char name[40];
    int age;
    int id;
};
int main()
{


   struct student stu[5];
    for(int i=0;i<2;i++)
    {
        fflush(stdin);
        scanf("%s",stu[i].name);
        fflush(stdin);
        scanf("%d",&stu[i].age);
        scanf("%d",&stu[i].id);
    }
    for(int i=0;i<2;i++)
    {
        printf("Name: %s\n Age: %d\n ID: %d   \n",stu[i].name,stu[i].age,stu[i].id);
    }

}
