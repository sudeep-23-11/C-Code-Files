//Functions
#include<stdio.h>
int square(int);
float cube(int n)
{
    int cb;
    cb=n*n*n;
    return cb;
}
void print(char str[]);
void input()
{
    char c;
    scanf("%c", &c);
    printf("%c\n", c);
}
int main()
{
    printf("%d\n", square(33));
    printf("%f\n", cube(66.99));
    print("Hello, World!");
    input();
    return 0;
}
int square(int n)
{
    int sq;
    sq=n*n;
    return sq;
}
void print(char str[])
{
    printf("%s\n", str);
    return;
}