//Recursion
#include<stdio.h>
int fact(int n);
int fibon(int n);
int main()
{
    int x, fac, y, fib;
    do
    {
        printf("Enter a non negative number\n");
        scanf("%d", &x);
    }
    while(x<0);
    fac=fact(x);
    printf("%d\n", fac);
    scanf("%d", &y);
    fib=fibon(y);
    printf("%d\n", fib);
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return (n*fact(n-1));
}
int fibon(int n)
{
    if(n==1||n==2)
    return (n-1);
    else
    return (fibon(n-1)+fibon(n-2));
}
