#include <stdio.h>
int main() {
    char c;
    int opt;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("1-play.\n 2-exit");
    scanf("%d",opt);
    switch (opt)
    {
    case 1:
         {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
        
    else{
        printf("%c is not an alphabet.", c);
          

    }
        break;
        case 2:
        {
            break;
        }
    
    default:
        break;
    }
      
   
  
    
    
    return 0;
}
}
