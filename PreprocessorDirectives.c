//PreprocessorDirectives
#include<stdio.h>
#define square(x) (x*x)
#define cube(x) (x*x*x)
#if !defined(square)
#define square(x) (x*x)
#define cube(x) (x*x*x)
#define quad(x) (square(x)*square(x))
#elif !defined(cube)
#define cube(x) (x*x*x)
#define quad(x) (square(x)*square(x))
#else 
#define quad(x) (square(x)*square(x))
#endif
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    b=square(a);
    c=cube(a);
    d=quad(a);
    printf("%d %d %d\n", b, c, d);
    return 0;
}
void fun1()
{
    printf("#pragma does not\n");
}
void fun2()
{
    printf("work in gcc compilers\n");
}