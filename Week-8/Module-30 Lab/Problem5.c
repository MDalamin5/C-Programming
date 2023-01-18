#include<stdio.h>
struct complx
{
    float real;
    float image;
};
void printCom(struct complx p);
struct complx add_com(struct complx p, struct complx q);
int main()
{
    struct complx c1={3.2,4.4};
    struct complx c2={2.2,6.4};
    printCom(add_com(c1,c2));
}
void printCom(struct complx p)
{
    printf("%.1f + %.1fi",p.real,p.image);
}
struct complx add_com(struct complx p, struct complx q)
{
    struct complx res;
    res.real=p.real+q.real;
    res.image=p.image+q.image;
    return res;
}
