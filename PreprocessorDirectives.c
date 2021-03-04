//PreprocessorDirectives
#include<stdio.h>
#define square(x) (x*x)
#ifdef square
#define cube(x) (x*x*x)
#else 
#define square(x) (x*x)
#define cube(x) (x*x*x)
#endif
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    int a, b, c;
    scanf("%d", &a);
    b=square(a);
    c=cube(a);
    printf("%d %d\n", b, c);
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