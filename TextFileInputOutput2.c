//TextFileInputOutput2
#include<stdio.h>
int main()
    {
        FILE *fp, *ft;
        char ch, dh;
        fp=fopen("demo1.txt", "r");
        ft=fopen("demo2.txt", "w");
        while(1)
        {
            ch=fgetc(fp);
            if(ch==EOF)
            break;
            else
            fputc(ch, ft);
        }
        fclose(ft);
        fclose(fp);
        ft=fopen("demo2.txt", "r");
        while(1)
        {
            dh=fgetc(ft);
            if(dh==EOF)
            break;
            else
            printf("%c", dh);
        }
        fclose(ft);
        return 0;
    }
