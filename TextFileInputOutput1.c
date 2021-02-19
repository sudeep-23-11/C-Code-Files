//TextFileInputOutput1
#include<stdio.h>
int main()
{
    FILE *fp, *ft;
    int a=33, x; 
    float b=66.99, y;
    char c='X', z;
    fp=fopen("demo1.txt", "w");
    fprintf(fp, "%d %f ", a, b);
    fclose(fp);
    fp=fopen("demo1.txt", "a");
    fprintf(fp, "%c\n", c);
    fclose(fp);
    fp=fopen("demo1.txt", "r");
    fscanf(fp, "%d %f %c", &x, &y, &z);
    printf("%d %f %c\n", x, y, z);
    fclose(fp);
    char S1[100], S2[100];
    fgets(S1, 100, stdin);
    ft=fopen("demo2.txt", "w");
    fputs(S1, ft);
    fclose(ft);
    ft=fopen("demo2.txt", "r");
    fgets(S2, 100, ft);
    fputs(S2, stdout);
    fclose(ft);
    return 0;
}