#include<stdio.h>
#include<math.h>
struct point
{
    int x;
    int y;
};
int get_madittain(struct point p, struct point q);
int main()
{
    struct point p1,p2;
    p1.x=1;
    p1.y=1;
     p2.x=4;
    p2.y=5;
    printf("Result %d",get_madittain(p1,p2));
}
int get_madittain(struct point p, struct point q)
{
    return abs(p.x-q.x)+ abs(p.y-q.y);
}
