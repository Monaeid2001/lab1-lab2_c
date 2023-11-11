#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    printf("enter two number and their operation");
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
      case'+':
         printf("num1 + num2 = %d",a+b);
         break;
      case'-':
         printf("num1 - num2 = %d",a-b);
         break;
       case'*':
         printf("num1 * num2 = %d",a*b);
         break;
        case'/':
            if(0==b)
           printf("can't divide by 0");
           else{
             printf("num1 / num2 = %d",a/b);
           }
         break;
        default:
            printf("invalid entry!!\n");
    }
    return 0;
}
