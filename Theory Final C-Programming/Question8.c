#include<stdio.h>
struct Student
{
    char name[40];
    int roll;
    int mark;
};
void printInfo(struct Student si);
int main()
{
    struct Student s;
    printf("Enter information:\n");
    printf("Enter name: ");
    fflush(stdin);
    scanf("%s",s.name);
    fflush(stdin);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%d",&s.mark);
    printInfo(s);
}
void printInfo(struct Student si)
{
    printf("\nDisplaying Information:\n");
    printf("Name: %s\n",si.name);
    printf("Roll number: %d\n",si.roll);
    printf("Marks: %d",si.mark);
}
