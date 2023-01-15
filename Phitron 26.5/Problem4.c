#include<stdio.h>
double get_radius(int radius);
int main()
{
    int radius;
    scanf("%d",&radius);
    printf("%lf",get_radius(radius));
}
double get_radius(int radius)
{
    return 3.1416*radius*radius;
}
