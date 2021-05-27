#include<stdio.h>
int main()
{
    int a;
    printf("If u have passed maths n science enter 1\n");
    printf("If u have passed maths enter 2\n");
    printf("If u have passed science enter 3\n");
    scanf("%d",&a);
      if (a==1)
      {
          printf("U got gift 1");
      }
      else if (a==2)
      {
         printf("U got gift 2");
      }
      else {
            printf("U got gift 3");
      }
      
    return 0;
}
