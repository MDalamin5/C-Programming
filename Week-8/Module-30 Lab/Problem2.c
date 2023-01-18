#include<stdio.h>
#include<math.h>
struct point
{
    double x;
    double y;
};

struct point get_mindPoint(struct point p,struct point q);
int main()
{
    struct point p1={1,2};
    struct point p2={3,4};
    struct point result= get_mindPoint(p1,p2);
    printf("Mid point of (x,y)= %.2lf, %.2lf",result.x,result.y);
}
struct point get_mindPoint(struct point p,struct point q)
{
    struct point avg;
    avg.x=(p.x+q.x)/2;
    avg.y=(p.y+q.y)/2;
    return avg;
}
