#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z;
    char c;
    float a = 5.56;
    int b = 3;
    c = 's';
    b = (int)a;
    x = sizeof(a);
    y = sizeof(b);
    z = sizeof(char);
    /*Typecasting means cganging the data type
    in above example we have changerd the float data type of b to int */
    printf("%d", b);
    printf("\n%d", x);
    printf("\n%d", y);
    printf("\n%d", z);
    return 0;
}
