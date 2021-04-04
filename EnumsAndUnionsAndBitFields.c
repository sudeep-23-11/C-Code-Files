//EnumsAndUnionsAndBitFields
#include<stdio.h>
int main()
{
    enum student
    {
        topper,average,failure,cheater
    };
    enum student s1, s2;
    s1=topper;
    s2=cheater;
    printf("%d %d\n", s1, s2);
    union sample
    {
        char c[sizeof(int)];
        int i;
    };
    union sample s;
    s.i=512;
    printf("%d\n", s.i);
    for(int j=0;j<sizeof(int);j++)
    printf("%d ", s.c[j]);
    struct employee
    {
        unsigned gender : 2;
        unsigned marstatus : 4;
        unsigned agegroup : 6;
    };
    struct employee e;
    e.gender=0;
    e.marstatus=3;
    e.agegroup=10;
    printf("\n%d %d %d\n", e.gender, e.marstatus, e.agegroup);
    return 0;
}