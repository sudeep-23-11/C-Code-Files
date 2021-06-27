//ConsoleInputOutput
#include<stdio.h>
int main()
{
    float f=555.55555;
    printf("%f\n", f);
    printf("%10.3f\n", f);
    printf("%-10.3f\n");
    char ch;
    scanf("%*c", &ch);
    printf("%c\n", ch);
    char S1[100];
    int a=33, x; 
    float b=66.99, y; 
    char c='X', z;
    sprintf(S1, "%d %f %c", a, b, c);
    sscanf(S1, "%d %f %c", &x, &y, &z);
    printf("%d %f %c\n", x, y, z);
    char dh;
    char S2[100];
    fflush(stdin);
    dh=getchar();
    putchar(dh);
    printf("\n");
    fflush(stdin);
    gets(S2);
    puts(S2);
    return 0;
}