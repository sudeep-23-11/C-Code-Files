//Structures
#include<stdio.h>
int main()
{
    struct book
    {
        char name [10];
        float price;
        int pages;
        char author[20];
    };
    struct book b[2];
    int i;
    for(i=0;i<2;i++)
    scanf("%s %f %d %s", &b[i].name, &b[i].price, &b[i].pages, &b[i].author);
    for(i=0;i<2;i++)
    printf("%s %f %d %s\n", b[i].name, b[i].price, b[i].pages, b[i].author);
    struct address
    {
        char state [20];
        char city [10];
        int pincode;
    };
    struct details
    {
        char name [20];
        struct address a;
    };
    struct details d1={"Sudeep", "Uttar Pradesh", "Lucknow", 226010};
    struct details d2=d1;
    printf("%s %s %s %d\n", d1.name, d1.a.state, d1.a.city, d1.a.pincode);
    printf("%s %s %s %d\n", d2.name, d2.a.state, d2.a.city, d2.a.pincode);
    return 0;
}