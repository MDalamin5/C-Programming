#include<stdio.h>
struct Point
{
    float x;
    float y;
};
struct Triangle
{
   struct Point A;
   struct Point B;
   struct Point C;
};
struct Point get_centeroid(struct Triangle tr);
int main()
{
    struct Point A={1,2};
    struct Point B={2,3};
    struct Point C={3,4};
    struct Triangle t={A,B,C};
    struct Point center= get_centeroid(t);
    printf(" x,y = %.2f, %.2f", center.x,center.y);
}
struct Point get_centeroid(struct Triangle tr)
{
    struct Point res;
    res.x=( tr.A.x +tr.B.x + tr.C.x)/3;
    res.y= (tr.A.y +tr.B.y + tr.C.y)/3;
    return res;
};
