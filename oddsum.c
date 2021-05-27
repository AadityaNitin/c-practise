#include<stdio.h>
int main(int argc, char const *argv[])
{
    double i,sum=0.0;
    int n;
    printf("enter no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+1/i;   
     
    }
    printf("%f",sum);
    return 0;
}
