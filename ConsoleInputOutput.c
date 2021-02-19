//ConsoleInputOutput
#include<stdio.h>
int main()
{
    float w=555.55555;
    printf("%f\n", w);
    printf("%10.3f\n", w);
    printf("%-10.3f\n");
    char str[50];
    int a=33, x; 
    float b=66.99, y; 
    char c='X', z;
    sprintf(str, "%d %f %c", a, b, c);
    sscanf(str, "%d %f %c", &x, &y, &z);
    printf("%d %f %c\n", x, y, z);
    char ch, S1[100], S2[100];
    ch=getchar();
    fflush(stdin);
    putchar(ch);
    printf("\n");
    gets(S1);
    puts(S1);
    return 0;
}