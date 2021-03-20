//BinaryFileInputOutput
#include<stdio.h>
int main()
{
    FILE *fp;
    int a=33, x; 
    float b=66.99, y;
    char c='X', z;
    fp=fopen("demo1.bin", "wb");
    fwrite(&a, sizeof(int), 1, fp);
    fwrite(&b, sizeof(float), 1, fp);
    fclose(fp);
    fp=fopen("demo1.bin", "ab");
    fwrite(&c, sizeof(char), 1, fp);
    fclose(fp);
    fp=fopen("demo1.bin", "rb");
    fread(&x, sizeof(int), 1, fp);
    fread(&y, sizeof(float), 1, fp);
    fread(&z, sizeof(char), 1, fp);
    printf("%d %f %c\n", x, y, z);
    printf("%d ", ftell(fp));
    fseek(fp, -5, SEEK_CUR);
    printf("%d ", ftell(fp));
    fseek(fp, 5, SEEK_SET);
    printf("%d ", ftell(fp));
    fseek(fp, -5, SEEK_END);
    printf("%d ", ftell(fp));
    rewind(fp);
    printf("%d\n", ftell(fp));
    fclose(fp);
    return 0;
}