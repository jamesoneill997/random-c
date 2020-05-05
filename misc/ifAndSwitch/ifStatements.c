#include <stdio.h>

int main(){
    int a = 3;
    int b = 2;

    //traditional if else if else

    if(a==b){
        printf("The same");
    }

    else if(a>b){
        printf("a is greater than b");
    }

    else{
        printf("b is greater than a");
    }

    printf("\n");


    //ternary statement = condition ? expression 1 : expression 2
    a==b ? printf("The same\n") : printf("Not the same\n");

    return 0;

}

