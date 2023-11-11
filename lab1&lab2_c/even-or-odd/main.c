#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   printf("enter a number");
   scanf("%d",&num);
   if(0==num%2){
    printf("number is even= %d",num);
   }
   else{
     printf("number is odd= %d",num);
   }
    return 0;
}
