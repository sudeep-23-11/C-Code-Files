//Pointers
#include<stdio.h>
void cba(int x, int y);
void cbr(int *p, int *q);
int main()
{
    int a=10, b=20;
    cba(a, b);
    printf("%d %d\n", a, b);
    cbr(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
void cba(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void cbr(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}