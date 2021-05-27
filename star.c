#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j,k;
    printf("Enter no of rows:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=a;j>=i;j--)
        {
            printf(" ");
        }
       for(k=1;k<=(2*i)-1;k++)
       {
           printf("*");
       }
        printf("\n");
    }
     for(i=1;i<=a;i++)
    {
        for(j=1 ;j<=i;j++)
        {
            printf(" ");
        }
       for(k=(2*a)-1;k>=(2*i)-1;k--)
       {
           printf("*");
       }
        printf("\n");
    }
    return 0;
}
