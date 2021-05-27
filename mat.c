#include<stdio.h>
 int main(int argc, char const *argv[])
 {
     int a=[10][10],b=[10][10],c=[10][10],i,j;
    printf("enter matrix 1");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3,j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("/n")
    }
     printf("enter matrix 2");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3,j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("/n")
        c[i][j]=a[i][j]+b[i][j];
        printf("%d",c[i][j]);
     return 0;
 }
 