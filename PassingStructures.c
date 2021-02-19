//PassingStructures
#include<stdio.h>
struct book
{
    char name [10];
    float price;
    int pages;
};
void display1(char *na, float pr, int pa);
void display2(struct book b);
void display3(struct book *pb);
int main()
{
    struct book b1={"Let Us C", 330.00, 470};
    display1(b1.name, b1.price, b1.pages);
    display2(b1);
    display3(&b1);
    return 0;
}
void display1(char *na, float pr, int pa)
{
    printf("%s %f %d\n", na, pr, pa);
}
void display2(struct book b)
{
    printf("%s %f %d\n", b.name, b.price, b.pages);
}
void display3(struct book *pb)
{
    printf("%s %f %d\n", pb->name, pb->price, pb->pages);
}
