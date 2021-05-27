#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter the no");
    scanf("%d",&n);
    for ( i = 1; i<=10; i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    
    return 0;
}
