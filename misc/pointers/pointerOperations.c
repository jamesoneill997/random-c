#include <stdio.h>

int main(){
    int *pNum = NULL;
    int number = 5;
    pNum = &number;

    printf("This is the address of the variable: %p\n ", &number);
    printf("This is the value of the variable: %d\n", number);
    printf("This is the address of the pointer: %p\n", (void*)&pNum);
    printf("This is the value of the pointer: %p\n ", pNum);
    



    return 0;
}