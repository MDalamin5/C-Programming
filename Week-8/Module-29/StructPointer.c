#include<stdio.h>
struct Student
{
    double weight;
    int age;
};
int main()
{
    struct Student s={.age=23, .weight=43.33};
   struct Student* sp;
    sp=&s;
    printf("%d %lf",sp->age,sp->weight);
}
