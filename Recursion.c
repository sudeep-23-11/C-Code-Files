//Recursion
#include<stdio.h>
int fact(int n);
int main()
{
    int x, fac;
    do
    {
        printf("Enter a non negative number\n");
        scanf("%d", &x);
    }
    while(x<0);
    fac=fact(x);
    printf("%d\n", fac);
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return (n*fact(n-1));
}