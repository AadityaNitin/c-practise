#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int x=5,y;
    // y=x++;
    // printf("%d\n",x);
    //  printf("%d",y);
    //this would give output as y=5 and x=6
     int x=5,y;
    y=++x;
    printf("%d\n",x);
     printf("%d",y);
     //this would give output as y=x=6
    return 0;
}
