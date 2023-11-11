#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("enter the grade:");

    scanf("%d",&grade);

    if(grade>=0 && grade<50){
        printf("FAIL");
    }
    else if(grade>=50 && grade<65){
      printf("PASS") ;
    }
    else if(grade>=65 && grade<75){
      printf("GOOD") ;
    }
    else if(grade>=75 && grade<85){
      printf("VERY GOOD") ;
    }
    else if(grade>=85 && grade<100){
      printf("EXCELLENT") ;
    }
    else{
        printf("ERROR");
    }
    return 0;
}
