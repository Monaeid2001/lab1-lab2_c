#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,n3;
   printf("enter three numbers");
   scanf("%d %d %d",&n1,&n2,&n3);
   if(n1>n2 && n1>n3){
    printf("number 1 is the largest = %d",n1);
   }
   else if(n2>n1 && n2>n3){
    printf("number 2 is the largest = %d",n2);
   }
   else{
    printf("number 3 is the largest = %d",n3);
   }
    return 0;
}
