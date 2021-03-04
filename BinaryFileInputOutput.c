//BinaryFileInputOutput
#include<stdio.h>
int main()
{
    FILE *fp;
    int a=33; 
    float b=66.99;
    char c='X';
    fp=fopen("demo1.bin", "wb");
    fwrite(&a, sizeof(a), 1, fp);
    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);
    fp=fopen("demo1.bin", "ab");
    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
    fp=fopen("demo1.bin", "rb");
    fread(&a, sizeof(a), 1, fp);
    fread(&b, sizeof(b), 1, fp);
    fread(&c, sizeof(c), 1, fp);
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