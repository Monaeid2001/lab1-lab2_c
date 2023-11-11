#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number to check);
    scanf("%d",&num);
    if(num>0){
        printf("number is positive");
    }
    else if(num<0){
        printf("number is negative");
    }
    else{
        printf("number is zero");
    }
    return 0;
}
