//BitwiseOperations
#include<stdio.h>
int main()
{
    unsigned int x, y, z, and, or, xor, not, lesh, rish, comp1, comp2;
    x=5;
    y=7;
    and=x&y;
    or=x|y;
    xor=x^y;
    not=~x;
    lesh=x<<2;
    rish=x>>2;
    z=1000;
    comp1=~z;
    comp2=comp1+1;
    printf("%u\t%u\t%u\t%u\t%u\t%u\t%u\t%u\n", and, or, xor, not, lesh, rish, comp1, comp2);
    return 0;
}